#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

#include "Cilindro.h"
#include "Circulo.h"

Cilindro::Cilindro(float valx, float valy, float rad, float altura):
    Circulo(valx,valy,rad)
{
    h = altura;
}

float Cilindro::Area()
{
    return (2.0 * M_PI * radio * h) + (Circulo::Area() * 2);
}

void Cilindro::Despliega()
{
    cout << " El cilindro tiene dos ";
    Circulo::Despliega();
    cout << " y una altura de " << h << endl;
}

float Cilindro::Volumen()
{
    return (M_PI * radio * radio * h);
}