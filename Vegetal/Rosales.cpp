#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <iostream>

using namespace std;

#include "Especie.h"
#include "Planta.h"
#include "Angiospermas.h"
#include "Rosales.h"

Rosales::Rosales(string _NombreCientifico, string _NombreVulgar, long _FechadeNacimiento, long _FechadeMuerte, bool _EstaVivo, int _EdadPromedio, int _PesoProduccionOxigeno, int _DiasFloracion, string _ColorFlor) : 
    Angiospermas(_NombreCientifico,_NombreVulgar,_FechadeNacimiento,_FechadeMuerte,_EstaVivo,_EdadPromedio,_PesoProduccionOxigeno,_DiasFloracion)
{
    ColorFlor = _ColorFlor;
} 

void Rosales::DespliegaRosales()
{
    Angiospermas::DespliegaAngiospermas();
    cout << "\tSu color comun es " << ColorFlor << " varia por condiciones.";
}

void Rosales::rosales()
{
    cout << "\n\tLa flor " << NombreVulgar << " llamada '" << NombreCientifico << "' tiene " << DiasFloracion << " dias al año por floracion con un color " << ColorFlor << endl;
}