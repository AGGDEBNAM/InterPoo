#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

#include "CilindroHueco.h"
#include "Cilindro.h"

CilindroHueco::CilindroHueco(float valx, float valy, float rad, float altura, float rad_1):
    Cilindro(valx,valy,rad,altura)
{
    radio_1 = rad_1;
}

float CilindroHueco::Longitud()
{
    return 2.0 * M_PI * (radio * radio - radio_1 * radio_1)  + 2.0 * M_PI * radio * h + 2.0 * M_PI * h * radio_1;

}

void CilindroHueco::Despliega()
{
    Cilindro::Despliega();
    cout << " y radio hueco de " << radio_1 << endl;
}

float CilindroHueco::Volumen()
{
    return M_PI *(radio * radio - radio_1 * radio_1)* h;
}