#ifndef SUELDOPORHORAS_H
#define SUELDOPORHORAS_H

#include <string>
#include <cstdlib>
#include <iostream>

#include "Empleados.h"
#include "SueldoPorHoras.h"
#include "Sueldos.h"

using namespace std;

class SueldoPorHoras: public Empleados
{
private:
protected:
    Sueldos cantidad;
public:
    SueldoPorHoras(int = 0, string = "", string = "", string = "", int = 0,int = 0,float = 0.0);
    int NumHoras();
    float TabuladorHoras();
};

#endif /* SUELDOPORHORAS_H */