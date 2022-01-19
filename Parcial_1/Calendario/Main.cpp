#include <cstdlib>
#include <iostream>

#include "Fecha.h"
#include "Fecha.cpp"

using namespace std;

int l; // variable global

int main(int argc, char** argv) 
{
    //^ Fecha
    
    cout << "hola mundo" << endl;
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
        cout << "Fecha válida" << endl;
    else
        cout << "Fecha inválida" << endl;
    Fecha fAyer = f.Ayer();
    cout << "El dia anterior es ";
    fAyer.Despliega();
    Fecha fAntes = f.MenosXDias(7);
    fAntes.Despliega();
    int diasem = f.DiaSemana(f.FechaADias());
    cout << diasem << endl;
    if(f.DiaHabil())
        cout << "Día hábil" << endl;
    else
        cout << "Día inhábil" << endl;
    
}