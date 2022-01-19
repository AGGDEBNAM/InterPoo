#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

#include "Fecha.h"

using namespace std;

// Animal es clase abstracta
// Es clase abstracta pura, porque contiene una función virtual pura
class Animal 
{
protected:
    Fecha  fechaNacimiento;
    string nombreCientifico;
    string nombreVulgar;
    string nombre;
    int    edadPromedio;
    char   genero;
    Fecha  fechaMuerte;
    bool   estaVivo;
public:
    Animal(long fechaNac, string nombreCi, string nombreVu, string nomb,
        int edadPro, char gen);
    void    DespliegaEspecie();
    void    DespliegaEspecimen();
    virtual void DiasSobrevivenciaCrias() = 0; // función virtual pura
    int     Edad();
    void    FechaMuerte(Fecha fm);
};

#endif /* ANIMAL_H */
