#include <cstdlib>
#include <iostream>
#include <math.h>
#include <string>


using namespace std;

#include "Rectangulo.h"

Rectangulo::Rectangulo(int al , int lg)//^ :Sueldos(,,)
{
    alto = al;
    largo = lg;
}

float Rectangulo::Area()
{
    if(alto < largo)
        return alto * largo;
    if(alto >= largo)
        cout << "tu rectangulo parece mas un cuadrado" << endl;
        return 0;
}

float Rectangulo::Al()
{
    return alto;
}

float Rectangulo::Lg()
{
    return largo;
}
