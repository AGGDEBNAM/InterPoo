#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>

#include "Sueldos.cpp"
#include "Sueldos.h"
#include "Empleados.cpp"
#include "Empleados.h"

using namespace std;

int l; // variable global

int main(int argc, char** argv) 
{
    Empleados e1(1,"Villanueva","Flores","Pablo",2,2017,32000.21);
    Empleados e2(2,"Gonzales","Valencia","Pedro",1,2008,17000.45);
    Empleados e3(3,"De La Paz","Ramos","Juan",3,2005,45000.75);
    e1.Despliega();
    e1.DespliegaSueldo();
    e1.DespliegaSueldoAnual();
    cout << "\n\n\n";
    e2.Despliega();
    e2.DespliegaSueldo();
    e2.DespliegaSueldoAnual();
    cout << "\n\n\n";
    e3.Despliega();
    e3.DespliegaSueldo();
    e3.DespliegaSueldoAnual();
}