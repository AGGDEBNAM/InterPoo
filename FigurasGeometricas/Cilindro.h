#ifndef CILINDRO_H
#define CILINDRO_H

#include "Circulo.h"

class Cilindro : public Circulo
{
protected:
    float h;   // altura
public:
    Cilindro(float valx, float valy, float rad, float altura);
    float Area();
    void  Despliega();
    float Volumen();
};

#endif /* CILINDRO_H */
