#include <cstdlib>
#include <iostream>

using namespace std;

#include "Empleados.h"
#include "SueldoPorHoras.h"
#include "Sueldos.h"

SueldoPorHoras::SueldoPorHoras(int numEmp, string apPat, string apMat, string nomb, int numSuel, int an, float suel)
{
}

int SueldoPorHoras::NumHoras()
{
    return 5;
}

float SueldoPorHoras::TabuladorHoras()
{
    return (28/cantidad.SueldoEmpleado())/NumHoras();
}


