#include <cstdlib>
#include <iostream>

#include "ColaCircular.h"
#include "Cola.h"

using namespace std;

// Sobrecarga de métodos
// Sobrecargando el método Cardinalidad que heredé de la clase Cola
int ColaCircular::Cardinalidad()
{
    if(EsVacia())
        return 0;
    if(frente <= fondo)
        return Cola::Cardinalidad();
    return (fondo + 1) + (((TAMCOLA - 1) - frente) + 1);
}

void ColaCircular::Despliega()
{
    if(frente <= fondo)
        Cola::Despliega();
    else
    {
        for(int i = frente; i < TAMCOLA; i++)
            cout << cola[i] << "\n\n";
        for(int j = 0; j <= fondo; j++)
            cout << cola[j] << "\n\n";
        cout << endl;
    }
}

bool ColaCircular::Elimina(int* num)
{
    if(EsVacia())
        return false;
    if(frente <= fondo)
        return Cola::Elimina(num);
    else
    {
        *num = cola[frente];
        frente = (frente == TAMCOLA - 1) ? 0 : frente + 1;
    }
    return true;
}

bool ColaCircular::EsElemento(int num)
{
    if(frente <= fondo)
        return Cola::EsElemento(num);
    else
    {
        for(int i = frente; i < TAMCOLA; i++)
            if(cola[i] == num)
                return true;
        for(int j = 0; j <= fondo; j++)
            if(cola[j] == num)
                return true;
        return false;
    }
}

bool ColaCircular::EsLlena()
{
    //if(frente > fondo && frente == 0 && fondo == TAMCOLA - 1) // cola normal
    if(frente == 0 && fondo == TAMCOLA - 1) // cola normal
        return true;
    if((fondo + 1) == frente)
        return true;
    return false;
}

bool ColaCircular::Inserta(int num)
{
    if(EsLlena())
        return false;
    if(EsVacia())
    {
        fondo = frente = 0;
        cola[fondo] = num;
    }
    else
    {
        fondo = (fondo == TAMCOLA - 1) ? 0 : fondo + 1;
        cola[fondo] = num;
    }
    return true;
}