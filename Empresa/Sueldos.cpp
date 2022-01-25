#include "Sueldos.h"

Sueldos::Sueldos(int idsu, int idem, int an, float su) 
{
    idSueldo = idsu;
    idEmpleado = idem;
    anio = an;
    sueldo = su;
}

int Sueldos::get_anio()
{
    return anio;
}

int Sueldos::IncrementoSueldo()
{
    return 0; // stub
}

float Sueldos::SueldoEmpleado()
{
    return sueldo;
}

float Sueldos::SueldoEmpleadoAnual()
{
    return sueldo * 12.5;
}
