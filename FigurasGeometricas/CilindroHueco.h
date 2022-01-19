#ifndef CILINDROHUECO_H
#define CILINDROHUECO_H

#include "Cilindro.h"

class CilindroHueco : public Cilindro
{
protected:
    float radio_1;   // altura
public:
    CilindroHueco(float valx, float valy, float rad, float altura, float rad_1);
    float Longitud();
    void  Despliega();
    float Volumen();
};

#endif /* CILINDRO_H */