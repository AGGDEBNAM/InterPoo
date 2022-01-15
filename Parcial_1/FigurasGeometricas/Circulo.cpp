#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

#include "Circulo.h"

Circulo::Circulo(float valx, float valy, float rad):centro(valx,valy)
{
    radio = rad;
}

float Circulo::Area()
{
    return M_PI * radio * radio;
}

void Circulo::Despliega()
{
    cout << "Circulo con centro en ";
    centro.Despliega();
    cout << " y radio de " << radio << " cms";
}

float Circulo::Perimetro()
{
    return 2.0 * M_PI * radio;
}