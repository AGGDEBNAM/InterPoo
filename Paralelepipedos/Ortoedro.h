#ifndef ORTOEDRO_H
#define ORTOEDRO_H

#include <cstdlib>
#include <iostream>
#include <math.h>
#include <string>

#include "Rectangulo.h"

class Ortoedro
{
private:
    Rectangulo despliega;
    int ancho;
public:
    Ortoedro(int al , int lg , int an); //^ constructor con valores predeterminados
    float Area();
    float Volumen();
};

#endif /* ORTOEDRO_H */
