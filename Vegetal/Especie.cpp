#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <iostream>


using namespace std;

#include "Especie.h"

Especie::Especie(string _NombreCientifico, string _NombreVulgar, long _FechadeNacimiento, long _FechadeMuerte, bool _EstaVivo, int _EdadPromedio)
{
    NombreCientifico = _NombreCientifico;
    NombreVulgar = _NombreVulgar;
    FechadeNacimiento = _FechadeNacimiento;
    FechadeMuerte = _FechadeMuerte;
    EstaVivo = _EstaVivo;
    EdadPromedio = _EdadPromedio;
}

void Especie::DespliegaEspecie()
{
    cout << "\n\tLa Especie '" << NombreVulgar << "' llamada cientificamente : " << NombreCientifico << ".\tTiene esperanza de vida de: " << EdadPromedio << " Años."; 
}

void Especie::especie()
{
    cout << "\n\tLa especie : " << NombreCientifico << " nacio en " << FechadeNacimiento << endl;
}

void Especie::Edad()
{
    cout << "\tSu edad estimada es de " << EdadPromedio << endl;
}

void Especie::FechaMuerte()
{
    if(EstaVivo == 1)
        cout << "\tNo a muerto :)" << endl;
    if(EstaVivo == 0)
        cout << "Murio en la fecha :" << FechadeMuerte << endl;  
}