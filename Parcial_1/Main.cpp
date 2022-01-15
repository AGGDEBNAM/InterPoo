#include <cstdlib>
#include <iostream>

#include "Fecha.h"
#include "Fecha.cpp"
#include "Pila.h"
#include "Pila.cpp"
#include "Cola.h"
#include "Cola.cpp"
#include "ColaCircular.h"
#include "ColaCircular.cpp"
#include "Punto.h"
#include "Punto.cpp"
#include "Circulo.h"
#include "Circulo.cpp"
#include "Cilindro.h"
#include "Cilindro.cpp"
#include "CilindroHueco.h"
#include "CilindroHueco.cpp"

using namespace std;

int l; // variable global

int main(int argc, char** argv) 
{
    //^ Fecha
    /*
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
    */
    //^ Pila
    /*
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
    */
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
    //^ Punto
    /*
    Punto p1(2.56,3.92);
    Punto p2(-3.45,8.75);
    float dist = p1.Distancia(p2);
    cout << "La distancia entre los puntos ";
    p1.Despliega();
    cout << " y ";
    p2.Despliega();
    cout << " es: " << dist << endl;
    */
    //^ Circulo
    /*
    Circulo c(2.5,10,3);
    cout << "El ";
    c.Despliega();
    cout << " tiene perímetro " << c.Perimetro() << " centímetros y área " 
            << c.Area() << " centímetros cuadrados" << endl;
    */
    //^ Cilindro
    /*
    Cilindro c(2.5,10,3,6.5);
    c.Despliega();
    cout << "Tiene un área de " << c.Area() << " centímetros cuadrados" << endl;
    cout << "Tiene un volumen de " << c.Volumen() << " centímetros cúbicos" <<  endl;
    return 0;
    */
    //^ CilindroHueco
    /*
    CilindroHueco c(2.5,10,3,6.5,1.5);
    c.Despliega();
    cout << "Tiene una Longitud de " << c.Longitud() << " centimetros. " << endl;
    cout << "Tiene un Volumen " << c.Volumen() << " centimetros cubicos " << endl;
    */
    //^Sig.
}