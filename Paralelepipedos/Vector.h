#ifndef VECTOR_H
#define VECTOR_H

#include "Punto.h"

class Vector 
{
private:
    Punto origen;
    Punto destino;
    float x1,y1,x2,y2;
public:
    Vector(float = 0.0,float = 0.0,float = 0.0,float = 0.0);
    Vector SumaParalelogramo(Vector v2);
};

#endif /* VECTOR_H */

