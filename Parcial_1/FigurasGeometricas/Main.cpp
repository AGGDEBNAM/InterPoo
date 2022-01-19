#include <cstdlib>
#include <iostream>

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
}