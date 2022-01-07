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
}

int Fecha::Anio(long f)
{
    return (int)(f / 10000);
}

void Fecha::Despliega()
{
    cout << "La fecha " << fe << " tiene dia: " << d << " mes: " << m 
            << " y año: " << a << endl;
}

int Fecha::Dia(long f)
{
    return (int)(f % 100);
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

int Fecha::Mes(long f)
{
    return (int)((f % 10000) / 100);
}

Fecha Fecha::Ayer()
{
    cout << "La fecha de ayer " << fe - 1 << " tiene dia: " << d - 1<< " mes: " << m 
            << " y año: " << a << endl;

    return 0;
}