#ifndef CIRCULO_H
#define CIRCULO_H

#include "Punto.h"

class Circulo 
{
private:
public:
    Punto centro;
    float radio;
    Circulo(float valx, float valy, float rad);
    float Area();
    void  Despliega();
    float Perimetro();
};

#endif /* CIRCULO_H */