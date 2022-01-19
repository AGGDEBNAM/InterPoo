#ifndef SUELDOS_H
#define SUELDOS_H

#include <string>
#include <cstdlib>
#include <iostream>

class Sueldos 
{
private:
    int   idSueldo;
    int   idEmpleado;
    int   anio;
    float sueldo;
protected:
    int numSuel;
    int numEmp;
    int an;
    float suel;
public:
    Sueldos(int idEmpelado = 0 , int idSueldo = 0 , int anio = 0 , float sueldo = 0.0); // constructor con valores predeterminados
    void Despliega();
    void IncrementoSueldo();   // regresa el nuevo idSueldo;
    int SueldoEmpleado();
    int SueldoAnual();
};

#endif /* SUELDOS_H */
