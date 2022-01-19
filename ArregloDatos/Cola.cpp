#include <cstdlib>
#include <iostream>

#include "Cola.h"

using namespace std;

Cola::Cola() 
{
    frente = fondo = -1;
}

int Cola::Cardinalidad()
{
    if(EsVacia())
        return 0;
    return (fondo - frente) + 1;
}

void Cola::Despliega()
{
    if(EsVacia())
        return;
    for(int i = frente; i <= fondo; i++)
        cout << cola[i] << "\n\n";
    cout << endl;
}

bool Cola::Elimina(int *num)
{
    if(EsVacia())
        return false;
    *num = cola[frente];
    frente++;
    if(frente > fondo)
        frente = fondo = -1;
    return true;
}

bool Cola::EsElemento(int num)
{
    if(EsVacia())
        return false;
    for(int i = frente; i <= fondo; i++)
        if(cola[i] == num)
            return true;
    return false;
}

bool Cola::EsLlena()
{
    if(fondo == TAMCOLA - 1)
        return true;
    else
        return false;
}

bool Cola::EsVacia()
{
    if(frente == -1)
        return true;
    else
        return false;
}

bool Cola::Inserta(int num)
{
    if(EsLlena())
        return false;
    fondo++;
    cola[fondo] = num;
    if(fondo == 0)
        frente = 0;
    return true;
}
