#include <cstdlib>
#include <iostream>
#include <math.h>
#include <string>

#include "Vector.h"
#include "Punto.h"

using namespace std;

Vector::Vector(float x1, float y1, float x2, float y2,) : origen(x1, y1), destino(x2, y2)
{

}

Vector Vector::SumaParalelogramo(Vector v2)
{
    cout << origen.Distancia(destino) + v.origen.Distancia(v.destino) << endl;
    
    //return sqrt(pow(vector_suma_1,2)+ pow(vector_suma_2,2)+ 2*(vector_suma_1)*(vector_suma_2));
}
