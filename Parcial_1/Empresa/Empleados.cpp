#include <cstdlib>
#include <iostream>
#include <math.h>
#include <string>


using namespace std;

#include "Sueldos.h"
#include "Empleados.h"

Empleados::Empleados(int numEmp , string apPat , string apMat , string nomb , int numSuel , int an , float suel):
    Sueldos(numEmp,numSuel,an,suel)
{
    apPat = apellidoPaterno;
    apMat = apellidoMaterno;
    nomb = nombre;
}

void Empleados::Despliega()
{
    cout << "Nuestro empleado " << numEmp << " llamado " ;
    cout << apPat;
    cout << apMat;
    cout << nomb;
    cout << " Admitido en el anio : " << an << " con ingresos sin impuesto: " << endl; 
}

void Empleados::DespliegaSueldo()
{
    cout << "El sueldo quincenal es de : ";
    Sueldos::SueldoEmpleado();
    cout << " mil Pesos Mexicanos\n";
    Sueldos::IncrementoSueldo();
}

void Empleados::DespliegaSueldoAnual()
{
    cout << "El sueldo anual es de: ";
    Sueldos::SueldoAnual();
    if(suel * 24 <= 999999)
        cout << " mil Pesos Mexicanos" << endl;
    else
        cout << " millones Pesos Mexicanos" << endl;
}
