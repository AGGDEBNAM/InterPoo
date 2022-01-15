#include <cstdlib>
#include <iostream>

#include "Pila.h"

using namespace std;

Pila::Pila() 
{
    tope = -1;
}

int Pila::Cardinalidad()
{
    return tope + 1;
}

void Pila::Despliega()
{
    for(int i = 0; i <= tope; i++)
        cout << pila[i] << "\t";
    cout << endl;
}

bool Pila::Elimina(int *num)
{
    if(EsVacia())
        return false;
    *num = pila[tope];
    tope--;
    return true;
}

bool Pila::EsElemento(int num)
{
    for(int i = 0; i <= tope; i++)
        if(pila[i] == num)
            return true;
    return false;
}

bool Pila::EsLlena()
{
    if(tope == TAMPILA - 1)
        return true;
    else
        return false;
}

bool Pila::EsVacia()
{
    if(tope == -1)
        return true;
    else
        return false;
}

bool Pila::Inserta(int num)
{
    if(EsLlena())
        return false;
    tope++;
    pila[tope] = num;
    return true;
}