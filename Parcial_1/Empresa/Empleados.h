#ifndef EMPLEADOS_H
#define EMPLEADOS_H

#include <string>
#include <cstdlib>
#include <iostream>

#include "Sueldos.h"

using namespace std;

class Empleados : public Sueldos
{
private:
    //Sueldos SueldoEmpleado;
    string  apellidoPaterno;
    string  apellidoMaterno;
    string  nombre;
protected:
    string nomb;
    string apPat;
    string apMat;
public:
    Empleados(int numEmp,string apPat,string apMat,string nomb,int numSuel,int an,float suel);
    void Despliega();
    void DespliegaSueldo();
    void DespliegaSueldoAnual();
};

#endif /* EMPLEADOS_H */