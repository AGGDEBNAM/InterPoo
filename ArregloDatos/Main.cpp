#include <cstdlib>
#include <iostream>

#include "Pila.h"
#include "Pila.cpp"
#include "Cola.h"
#include "Cola.cpp"
#include "ColaCircular.h"
#include "ColaCircular.cpp"

using namespace std;

int l; // variable global

int main(int argc, char** argv) 
{
    //^ Pila
    
    Pila p;
    if(p.EsVacia())
        cout << "pila vacía" << endl;
    p.Despliega();
    if(!p.EsElemento(3))
        cout << "el 3 no es un elemento de la pila" << endl;
    p.Inserta(5);
    p.Inserta(8);
    p.Despliega();
    int num;
    if(p.Elimina(&num))
        cout << "eliminó el " << num << endl;
    int cuantos = p.Cardinalidad();
    cout << "hay " << cuantos << " enteros en la pila " << endl;
    p.Elimina(&num);
    if(p.EsVacia())
        cout << "pila vacía\n";
    p.Despliega();
    p.Inserta(9);
    p.Inserta(18);
    p.Inserta(5);
    p.Inserta(0);
    p.Inserta(-3);
    p.Inserta(94);
    p.Inserta(30);
    p.Despliega();
    cuantos = p.Cardinalidad();
    cout << "hay " << cuantos << " enteros en la pila " << endl;
    p.Inserta(76);
    p.Inserta(-9);
    p.Inserta(25);
    p.Despliega();
    if(p.EsLlena())
        cout << "pila llena\n";
    if(!p.Inserta(29))
        cout << "no pudo insertar\n";
    if(p.EsElemento(94))
        cout << "el 94 sí es elemento de la pila\n"; 
    
    //^Cola
    /*
    Cola c;
    if(c.EsVacia())
        cout << "cola vacía" << endl;
    c.Despliega();
    if(!c.EsElemento(3))
        cout << "el 3 no es un elemento de la cola" << endl;
    c.Inserta(5);
    c.Inserta(8);
    c.Despliega();
    int num;
    if(c.Elimina(&num))
        cout << "eliminó el " << num << endl;
    int cuantos = c.Cardinalidad();
    cout << "hay " << cuantos << " enteros en la cola " << endl;
    c.Elimina(&num);
    if(c.EsVacia())
        cout << "cola vacía\n";
    c.Despliega();
    c.Inserta(9);
    c.Inserta(18);
    c.Inserta(5);
    c.Inserta(0);
    c.Inserta(-3);
    c.Inserta(94);
    c.Inserta(30);
    c.Despliega();
    cuantos = c.Cardinalidad();
    cout << "hay " << cuantos << " enteros en la cola " << endl;
    c.Inserta(76);
    c.Inserta(-9);
    c.Inserta(25);
    c.Despliega();
    if(c.EsLlena())
        cout << "cola llena\n";
    if(!c.Inserta(29))
        cout << "no pudo insertar\n";
    if(c.EsElemento(94))
        cout << "el 94 sí es elemento de la cola\n";
    */
    //^ ColaCircular
    /*
    ColaCircular c;
    if(c.EsVacia())
        cout << "cola vacía" << endl;
    c.Despliega();
    if(!c.EsElemento(3))
        cout << "el 3 no es un elemento de la cola" << endl;
    c.Inserta(5);
    c.Inserta(8);
    c.Despliega();
    int num;
    if(c.Elimina(&num))
        cout << "eliminó el " << num << endl;
    int cuantos = c.Cardinalidad();
    cout << "hay " << cuantos << " enteros en la cola " << endl;
    c.Elimina(&num);
    if(c.EsVacia())
        cout << "cola vacía\n";
    c.Despliega();
    c.Inserta(9);
    c.Inserta(18);
    c.Inserta(5);
    c.Inserta(0);
    c.Inserta(-3);
    c.Inserta(94);
    c.Inserta(30);
    c.Despliega();
    cuantos = c.Cardinalidad();
    cout << "hay " << cuantos << " enteros en la cola " << endl;
    c.Inserta(76);
    c.Inserta(-9);
    c.Inserta(25);
    c.Despliega();
    if(c.EsLlena())
        cout << "cola llena\n";
    if(!c.Inserta(29))
        cout << "no pudo insertar\n";
    if(c.EsElemento(94))
        cout << "el 94 sí es elemento de la cola\n";
    if(c.Elimina(&num))
        cout << "eliminó el " << num << endl;
    if(c.Elimina(&num))
        cout << "eliminó el " << num << endl;
    if(c.Elimina(&num))
        cout << "eliminó el " << num << endl;
    if(c.Inserta(29))
        cout << "sí pudo insertar\n";
    c.Despliega();
    */
}