#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>

#include "Rectangulo.cpp"
#include "Rectangulo.h"
#include "Ortoedro.cpp"
#include "Ortoedro.h"
#include "Punto.h"
#include "Punto.cpp"
#include "Vector.h"
#include "Vector.cpp"

using namespace std;

int l; // variable global

int main(int argc, char** argv) 
{
    //^ Rectangulo
    /*
    Rectangulo r(2,7);
    cout << "El area del rectangulo es de : " << r.Area() << endl;
    */
    //^ Ortoedro
    /*
    Ortoedro o(11,12,5);
    cout << "El area del ortoedro es de : " << o.Area() << " cubica" << endl;
    cout << "El Volumen del ortoedro es de : " << o.Volumen() << " cubicos" << endl;
    */
    //^ Punto
    /*
    Punto p1(0,0);
    Punto p2(5,0);
    float dist = p1.Distancia(p2);
    cout << "La distancia entre los puntos ";
    p1.Despliega();
    cout << " y ";
    p2.Despliega();
    cout << " es: " << dist << endl;
    */
    //^Vector
    Vector v1(0,0,5,0);
    Vector v2(0,0,0,5);
    float v3 = v1.SumaParalelogramo(v2);
    cout << v3 << endl;   
    return 0;
}