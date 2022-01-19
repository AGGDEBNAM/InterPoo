#include "Fecha.h"

#include <cstdlib>
#include <iostream>

using namespace std;

// f tiene formato AAAAMMDD 20220106
Fecha::Fecha(long f)
{
    fe = f;
    d = Dia(f);
    m = Mes(f);
    a = Anio(f);
    diasmes[0] = diasmes[2] = diasmes[4] = diasmes[6] = diasmes[7] = 31;
    diasmes[9] = diasmes[11] = 31;
    diasmes[1] = 29;
    diasmes[3] = diasmes[5] = diasmes[8] = diasmes[10] = 30;
}

int Fecha::Anio(long f)
{
    return (int)(f / 10000);
}

Fecha Fecha::Ayer()
{
    int a1 = a, m1 = m, d1 = d;
    if(d1 > 1)
        d1--;
    else
        if(m1 > 1)
        {
            m1--;
            d1 = diasmes[m1 - 1];
        }
        else
        {
            a1--;
            d1 = 31;
            m1 = 12;
        }
    if(m1 == 2 && !EsBisiesto())
        d1 = 28;
    return Fecha((long)((a1 * 10000) + (m1 * 100) + d1));
}

void Fecha::Despliega()
{
    cout << "La fecha " << fe << " tiene día: " << d << " mes: " << m 
            << " y año: " << a << endl;
}

int Fecha::Dia(long f)
{
    return (int)(f % 100);
}

bool Fecha::DiaHabil()
{
    if((m == 1 && d == 1) || (m == 2 && d == 5) || (m == 3 && d == 21)
            || (m == 5 && d == 1) || (m == 9 && d == 16) ||
            (m == 11 && d == 20) || (m == 12 && d == 25))
        return false;
    Fecha domingosanto = DomingoPascua(a);
    Fecha juevessanto = domingosanto.MenosXDias(3);
    if(m == juevessanto.m && d == juevessanto.d)
        return false;
    Fecha viernessanto = domingosanto.MenosXDias(2);
    if(m == viernessanto.m && d == viernessanto.d)
        return false;
    if(DiaSemana(FechaADias()) == 6 || DiaSemana(FechaADias()) == 7)
        return false;
    return true;
}

// Regresa 1 para lunes, 2 martes ... , 6 sabado, 7 domingo
int Fecha::DiaSemana(int dias)
{
    int diasem = dias % 7;
    if(diasem == 0)
        diasem = 7;
    return diasem;
}

// El resultado esta en el formato AAAAMMDD
long Fecha::DomingoPascua(int Anio)
{
    // Algoritmo de Gauss para calcular el Domingo de Pascua
    long domingoPascua = (long)Anio * 10000;
    int a, b, c, k, p, q, M, N, d, e;
    int dia, mes;
    a = Anio % 19;
    b = Anio % 4;
    c = Anio % 7;
    k = Anio / 100;
    p = (13 + (8 * k)) / 25;
    q = k / 4;
    M = (15 - p + k - q) % 30;
    N = (4 + k -q) % 7;
    d = ((19 * a) + M) % 30;
    e = ((2 * b) + (4 * c) + (6 * d) + N) % 7;
    if((d + e) < 10)
    {
        mes = 3;
        dia = d + e + 22;
    }
    else
    {
        mes = 4;
        dia = d + e - 9;
    }
    if(dia == 26 && mes == 4)
        dia = 19;
    if(dia == 25 && mes == 4 && d == 28 && e == 6 && a > 10)
        dia = 18;
    domingoPascua += mes * 100;
    domingoPascua += dia;
    return domingoPascua;
}

bool Fecha::EsBisiesto()
{
    if(a % 4 == 0)
        if(a < 1589)               // Calendario juliano
            return true;           // 1500  
        else                       // calendario gregoriano
            if(a % 100 == 0)       // Es principio de siglo
                if(a % 400 == 0)   
                    return true;   // 2000
                else
                    return false;  // 2100
            else
                return true;       // 2020
    else
        return false;              // 2022
}

bool Fecha::EsBisiesto(int an)
{
    if(an % 4 == 0)
        if(an < 1589)               // Calendario juliano
            return true;           // 1500  
        else                       // calendario gregoriano
            if(an % 100 == 0)       // Es principio de siglo
                if(an % 400 == 0)   
                    return true;   // 2000
                else
                    return false;  // 2100
            else
                return true;       // 2020
    else
        return false;              // 2022
}

bool Fecha::EsValida()
{
    if(m <= 0 || m > 12 || d <= 0)
        return false;
    if(d > diasmes[m - 1])
        return false;
    if(!EsBisiesto() && m == 2 && d == 29)
        return false;
    return true;
}

// regresa el número de días transcurridos desde el 1 de enero de 1900
int Fecha::FechaADias()
{
    int numdias = 0;
    for(int i = 1900; i < a; i++)
        numdias += (EsBisiesto(i)) ? 366 : 365;
    for(int j = 1; j < m; j++)
    {
       numdias += diasmes[j - 1];
       if(!EsBisiesto() && j == 2)
           numdias--;
    }
    numdias += d;
    return numdias;
}

Fecha Fecha::MenosXDias(int dias)
{
    int a1 = a, m1 = m, d1 = d;
    for(;;) // restar años completos
    {
        if(EsBisiesto(a1) && d1 >= 366)
        {
            dias -= 366;
            a1--;
        }
        else
            if(!EsBisiesto(a1) && d1 >= 365)
            {
                dias -= 365;
                a1--;
            }
            else
                break;
    }
    if(dias >= d1) 
    {
        dias -= d1;
        if(m1 != 1)
        {
            m1--;
            d1 = diasmes[m1 - 1];
            if(!EsBisiesto(a1) && m1 == 2)
                d1 = 28;
        }
        else
        {
            m1 = 12;
            d1 = 31;
            a1--;
        }
    }
    while(true)  // resto meses completos
    {
        if(dias >= diasmes[m1 - 1])
        {
            dias -= diasmes[m1 - 1];
            if(m1 >= 2)
            {
                m1--;
                d1 = diasmes[m1 - 1];
                if(!EsBisiesto(a1) && m1 == 2)
                {
                    d1 = 28;
                    dias++;
                }
            }
            else
            {
                m1 = 12;
                d1 = 31;
                a1--;
            }        
        } // if(dias >= diasmes[m1 - 1])
        else
            break;
    }
    d1 -= dias;
    dias = 0;
    return Fecha((long)((a1 * 10000) + (m1 * 100) + d1));
}

int Fecha::Mes(long f)
{
    return (int)((f % 10000) / 100);
}
