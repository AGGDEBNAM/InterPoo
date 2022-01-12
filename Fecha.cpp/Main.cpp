#include <cstdlib>
#include <iostream>

#include "Fecha.h"
#include "Fecha.cpp"
#include "Cola.h"
#include "Cola.cpp"

using namespace std;

int l; // variable global

int main(int argc, char** argv) 
{
    //cout << "hola mundo" << endl;
    /*long fec;
    cout << "Dame una fecha (AAAAMMDD): ";
    cin >> fec;
    Fecha f(fec);   // Fecha f = Fecha(fec);
    f.Despliega();*/
    /*if(f.EsBisiesto())
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
    cout << diasem << endl;*/
    /*if(f.DiaHabil())
        cout << "Día hábil" << endl;
    else
        cout << "Día inhábil" << endl;*/
    Cola p;
    if(p.EsVacia())
        cout << "Cola vacía" << endl;
    p.Despliega();
    if(!p.EsElemento(69))
        cout << "el 69 no es un elemento de la Cola" << endl;
    p.Inserta(12);
    p.Inserta(13);
    p.Despliega();
    int num;
    if(p.Elimina(&num))
        cout << "eliminó el " << num << endl;
    int cuantos = p.Cardinalidad();
    cout << "hay " << cuantos << " enteros en la Cola " << endl;
    p.Elimina(&num);
    if(p.EsVacia())
        cout << "Cola vacía\n";
    p.Despliega();
    p.Inserta(34);
    p.Inserta(5);
    p.Inserta(25);
    p.Inserta(0);
    p.Inserta(-98);
    p.Inserta(96);
    p.Inserta(9);
    p.Despliega();
    cuantos = p.Cardinalidad();
    cout << "hay " << cuantos << " enteros en la Cola " << endl;
    p.Inserta(4);
    p.Inserta(-1);
    p.Inserta(3);
    p.Despliega();
    if(p.EsLlena())
        cout << "Cola llena\n";
    if(!p.Inserta(7))
        cout << "no pudo insertar\n";
    if(p.EsElemento(0))
        cout << "el 0 sí es elemento de la Cola\n";    
    return 0;
}