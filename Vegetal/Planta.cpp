#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <iostream>

using namespace std;

#include "Especie.h"
#include "Planta.h"

Planta::Planta(string _NombreCientifico, string _NombreVulgar, long _FechadeNacimiento, long _FechadeMuerte, bool _EstaVivo, int _EdadPromedio, int _PesoProduccionOxigeno) : 
    Especie(_NombreCientifico,_NombreVulgar,_FechadeNacimiento,_FechadeMuerte,_EstaVivo,_EdadPromedio)
{
    PesoProduccionOxigeno = _PesoProduccionOxigeno;
} 

void Planta::DespliegaPlanta()
{
    Especie::DespliegaEspecie();
    cout << "\tCon produccion de oxigeno de :" << PesoProduccionOxigeno << " mg/L."; 
}

void Planta::planta()
{
    cout << "\n\tLa " << NombreVulgar << " produce " << PesoProduccionOxigeno << "mg/L." <<  endl;
}
