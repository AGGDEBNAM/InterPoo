#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <iostream>

using namespace std;

#include "Especie.h"
#include "Planta.h"
#include "Briofitas.h"

Briofitas::Briofitas(string _NombreCientifico, string _NombreVulgar, long _FechadeNacimiento, long _FechadeMuerte, bool _EstaVivo, int _EdadPromedio, int _PesoProduccionOxigeno, float _Centimetros) : 
    Planta(_NombreCientifico,_NombreVulgar,_FechadeNacimiento,_FechadeMuerte,_EstaVivo,_EdadPromedio,_PesoProduccionOxigeno)
{
    Centimetros = _Centimetros;
} 

void Briofitas::DespliegaBriofitas()
{
    Planta::DespliegaPlanta();
    cout << "\tSu tamaño estimado es de " << Centimetros << " centimetros.";
}

void Briofitas::briofitas()
{
    cout << "\n\tLa briofita " << NombreVulgar << " produce " << PesoProduccionOxigeno << "mg/L." << " Cuenta con una longitud de " << Centimetros << " centimetros, y pueden perdurar " << EdadPromedio << " años." << endl;
}