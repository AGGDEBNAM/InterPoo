#ifndef RECTANGULO_H
#define RECTANGULO_H

#include <cstdlib>
#include <iostream>
#include <math.h>
#include <string>

class Rectangulo
{
private:
    int alto;
    int largo;
protected:
    int al;
    int lg;
public:
    Rectangulo(int al, int lg); //^ constructor con valores predeterminados
    float Area();
    float Al();
    float Lg();
};

#endif /* RECTANGULO_H */