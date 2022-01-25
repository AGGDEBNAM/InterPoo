#include <cstdlib>
#include <iostream>
#include <math.h>
#include <string>


using namespace std;

#include "Ortoedro.h"
#include "Rectangulo.h"

Ortoedro::Ortoedro(int al , int lg , int an):despliega(al,lg)
{
    ancho = an;
}

float Ortoedro::Area()
{   
    if(despliega.Al() < despliega.Lg())
        return 2*(despliega.Area() + ancho * despliega.Al() + ancho * despliega.Lg());
    if(despliega.Al() >= despliega.Lg())
        cout << "tu rectangulo parece mas un cuadrado" << endl;
        return 0;
}

float Ortoedro::Volumen()
{
    if(despliega.Al() < despliega.Lg())
        return despliega.Area() * ancho;
    if(despliega.Al() >= despliega.Lg())
        cout << "tu rectangulo parece mas un cuadrado" << endl;
        return 0;
}