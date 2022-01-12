#include <cstdlib>
#include <iostream>

#include "Cola.h"

using namespace std;

Cola::Cola() 
{
    tope = -1;
}

int Cola::Cardinalidad()
{
    return tope + 1;
}

void Cola::Despliega()
{
    for(int i = 0; i <= tope; i++)
        cout << cola[i] << "\n\n";
    cout << endl;
}

bool Cola::Elimina(int *num)
{
    if(EsVacia())
        return false;
    *num = cola[0];
    tope--;
    
    /*cola[0] = cola[1];
    cola[1] = cola[2];
    cola[2] = cola[3];
    cola[3] = cola[4];
    cola[4] = cola[5];
    cola[5] = cola[6];
    cola[6] = cola[7];
    cola[7] = cola[8];
    cola[8] = cola[9];
    cola[9] = cola[0];
    return true;*/

    for(int l1 = 0 ; l1 <= 8 ; l1++)
    for(int l2 = 1 ; l2 <= 9 ; l2++)
        cola[l1] = cola[l2];
        cola[9] = cola[0];
    return true;
}

bool Cola::EsElemento(int num)
{
    for(int i = 0; i <= tope; i++)
        if(cola[i] == num)
            return true;
    return false;
}

bool Cola::EsLlena()
{
    if(tope == TAMCOLA - 1)
        return true;
    else
        return false;
}

bool Cola::EsVacia()
{
    if(tope == -1)
        return true;
    else
        return false;
}

bool Cola::Inserta(int num)
{
    if(EsLlena())
        return false;
    tope++;
    cola[tope] = num;
    return true;
}