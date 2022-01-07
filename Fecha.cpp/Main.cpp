#include <cstdlib>
#include <iostream>

#include "Fecha.h"
#include "Fecha.cpp"

using namespace std;

int l; // variable global

int main(int argc, char** argv) 
{
    //cout << "hola mundo" << endl;
    long fec;
    cout << "Dame una fecha (AAAAMMDD): ";
    cin >> fec;
    Fecha f(fec);   // Fecha f = Fecha(fec);
    f.Despliega();
    if(f.EsBisiesto())
        cout << "Año bisiesto" << endl;
    else
        cout << "Año no bisiesto" << endl;
    if(f.EsValida())
        cout << "Fecha valida" << endl;
    else
        cout << "Fecha invalida" << endl;
    Fecha fAyer = f.Ayer();
    return 0;
}
