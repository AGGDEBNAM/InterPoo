#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <iostream>

using namespace std;

#include "Especie.h"
#include "Planta.h"
#include "Briofitas.h"
#include "Musgos.h"

Musgos::Musgos(string _NombreCientifico, string _NombreVulgar, long _FechadeNacimiento, long _FechadeMuerte, bool _EstaVivo, int _EdadPromedio, int _PesoProduccionOxigeno, float _Centimetros, string _Habitat) : 
    Briofitas(_NombreCientifico,_NombreVulgar,_FechadeNacimiento,_FechadeMuerte,_EstaVivo,_EdadPromedio,_PesoProduccionOxigeno,_Centimetros)
{
    Habitat = _Habitat;
} 

void Musgos::DespliegaMusgos()
{
    Briofitas::DespliegaBriofitas();
    cout<<endl;
    cout << "\tSu habitat principal se conforma en " << Habitat << " como selvas en general y usualmente en grietas de calles humedas.";
}

void Musgos::musgos()
{
    cout << "\n\tEl musgo " << NombreVulgar << " produce " << PesoProduccionOxigeno << "mg/L." << " Cuenta con una longitud de " << Centimetros << " centimetros, y pueden perdurar " << EdadPromedio << " años en habitat selvatico." << endl;
}