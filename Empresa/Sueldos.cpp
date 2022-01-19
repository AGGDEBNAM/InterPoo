#include <cstdlib>
#include <iostream>
#include <math.h>
#include <string>

#include "Sueldos.h"

using namespace std; 

Sueldos::Sueldos(int idEmpleado , int idSueldo , int anio , float sueldo) 
{
    numEmp = idEmpleado;
    numSuel = idSueldo;
    an = anio;
    suel = sueldo;
}

void Sueldos::IncrementoSueldo()
{
    float x,y,z;
    if(numSuel == 1)
        x = suel*0.05;
    if(numSuel == 2)
        x = suel*0.10;
    if(numSuel == 3)
        x = suel*0.15;
    z = suel + x;
    if(numSuel == 1)
        y = z*0.05;
    if(numSuel == 2)
        y = z*0.10;
    if(numSuel == 3)
        y = z*0.15; 
    cout << "Con el tipo de sueldo " << numSuel << " Otorga en los sig. 3 anios:\n" << endl;
    cout << "Anio 1: " << suel << "\tAnio 2: " << suel + x << "\tAnio 3: " << suel + x + y << "\n" << endl;
}

int Sueldos::SueldoEmpleado()
{
    cout << suel ;
    return 0;
}

int Sueldos::SueldoAnual()
{
    cout << suel * 24 ;
    return 0;
}

