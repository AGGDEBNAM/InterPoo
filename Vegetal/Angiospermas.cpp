#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <iostream>

using namespace std;

#include "Especie.h"
#include "Planta.h"
#include "Angiospermas.h"

Angiospermas::Angiospermas(string _NombreCientifico, string _NombreVulgar, long _FechadeNacimiento, long _FechadeMuerte, bool _EstaVivo, int _EdadPromedio, int _PesoProduccionOxigeno, int _DiasFloracion) : 
    Planta(_NombreCientifico,_NombreVulgar,_FechadeNacimiento,_FechadeMuerte,_EstaVivo,_EdadPromedio,_PesoProduccionOxigeno)
{
    DiasFloracion = _DiasFloracion;
} 

void Angiospermas::DespliegaAngiospermas()
{
    Planta::DespliegaPlanta();
    cout << "\tCuenta con : " << DiasFloracion << " dias de floracion.";
}

void Angiospermas::angiospermas()
{
    cout << "\n\tEl angiosperma floral " << NombreVulgar << " produce " << PesoProduccionOxigeno << "mg/L." << " Pero se relentiza " << DiasFloracion << " dias al año por floracion , un 50%. " << endl;
}