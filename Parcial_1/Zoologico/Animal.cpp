#include <cstdlib>
#include <iostream>
#include <string.h>
#include <time.h>    

#include "Animal.h"
#include "cadenas.h"
#include "Fecha.h"

Animal::Animal(long fechaNac, string nombreCi, string nombreVu, 
        string nomb, int edadPro,char gen):fechaNacimiento(fechaNac)
{
    nombreCientifico = nombreCi;
    nombreVulgar = nombreVu;
    nombre = nomb;
    edadPromedio = edadPro;
    genero = gen;
    estaVivo = true;
}

void Animal::DespliegaEspecie()
{
    cout << "El " << nombreVulgar << " es el " << nombreCientifico
        << " y ésta especie tiene una edad promedio de " <<
            edadPromedio << endl;
}

void Animal::DespliegaEspecimen()
{
    cout << nombre << " es un " << nombreVulgar;
    if(genero == 'M')
        cout << " macho que nació el ";
    else
        cout << " hembra que nació el "; 
    fechaNacimiento.Despliega();
    if(!estaVivo)
    {
        cout << " y murió el ";
        fechaMuerte.Despliega();
    }
    cout << endl;
}

int Animal::Edad()
{
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);
    cadenas cad;
    int anio = cad.AnioDeTime(buf);
    int edad = anio - fechaNacimiento.Anio();
    cout << nombre << " tiene una edad de " << edad << " años.\n";
}

void Animal::FechaMuerte(Fecha fm)
{
    fechaMuerte = fm;
    estaVivo = false;
}


