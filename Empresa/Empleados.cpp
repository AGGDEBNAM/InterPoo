#include <cstdlib>
#include <iostream>

using namespace std;

#include "Empleados.h"
#include "SueldoPorHoras.h"

Empleados::Empleados(int numEmp, string apPat, string apMat, 
    string nomb, int numSuel, int an, float suel) : 
    SueldoEmpleado(numSuel, numEmp, an, suel)
{
    idEmpleados = numEmp;
    apellidoPaterno = apPat;
    apellidoMaterno = apMat;
    nombre = nomb;
}

void Empleados::Despliega()
{
    cout << "El empleado " << nombre << " " << apellidoPaterno
        << " " << apellidoMaterno << " tiene el código " << idEmpleados 
        << endl;
}

void Empleados::DespliegaSueldo()
{
    cout << "Tiene el sueldo de " << SueldoEmpleado.SueldoEmpleado()
        << " para el año " << SueldoEmpleado.get_anio() << ". Trabajando en planta : " <<  Horas.NumHoras() << " al dia \t Con un sueldo de" << Horas.TabuladorHoras() << " Por hora." << endl;
}

void Empleados::DespliegaSueldoAnual()
{
    cout << "Y un sueldo anual de " << 
        SueldoEmpleado.SueldoEmpleadoAnual() << endl;
}