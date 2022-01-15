#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

#include "Punto.h"

Punto::Punto(float valx, float valy)
{
    x = valx;
    y = valy;
}

void Punto::Despliega()
{
    cout << "(" << x << "," << y << ")";
}

float Punto::Distancia(Punto p)
{
    return sqrt(pow(p.x - x, 2) + pow(p.y - y, 2));
    // return sqrt(((p.x - x) * (p.x -x)) + ((p.y - y) * (p.y - y)));
    // return pow((pow(p.x - x,2) + pow(p.y - y,2)),0.5);
}