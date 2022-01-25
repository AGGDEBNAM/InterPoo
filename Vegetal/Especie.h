#ifndef ESPECIE_H
#define ESPECIE_H

#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <iostream>

class Especie
{
private:
protected:
    string NombreCientifico;
    string NombreVulgar;
    long FechadeNacimiento;
    long FechadeMuerte;
    bool EstaVivo;
    int EdadPromedio;
public:
    Especie(string,string,long,long,bool,int);
    virtual void DespliegaEspecie();
    void especie();
    void Edad();
    void FechaMuerte();

};

#endif /* ESPECIE_H */
