#ifndef EMPLEADOS_H
#define EMPLEADOS_H

#include <string>

#include "Sueldos.h"
#include "SueldoPorHoras.h"

using namespace std;

class Empleados
{
protected:
    Sueldos SueldoEmpleado;
    SueldoPorHoras Horas;

    int     idEmpleados;
    string  apellidoPaterno;
    string  apellidoMaterno;
    string  nombre;
public:
    Empleados(int = 0, string = "", string = "", string = "", int = 0,
        int = 0,float = 0.0); // constructor con valores predeterminados
    void Despliega();
    void DespliegaSueldo();
    void DespliegaSueldoAnual();
};

#endif /* EMPLEADOS_H */