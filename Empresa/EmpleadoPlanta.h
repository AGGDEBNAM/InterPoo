#ifndef EMPLEADOPLANTA_H
#define EMPLEADOPLANTA_H

#include <string>
#include <cstdlib>
#include <iostream>

#include "Empleados.h"
#include "EmpleadoPlanta.h"

using namespace std;

class EmpleadoPlanta:public Empleados
{
private:
protected:
public:
    EmpleadoPlanta(int = 0, string = "", string = "", string = "", int = 0,int = 0,float = 0.0); 
};

#endif /* EMPLEADOPLANTA_H */