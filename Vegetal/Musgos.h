#ifndef MUSGOS_H
#define MUSGOS_H

#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <iostream>

#include "Especie.h"
#include "Planta.h"
#include "Briofitas.h"

class Musgos :public Briofitas
{
private:
protected:
    string Habitat;
public:
    Musgos(string,string,long,long,bool,int,int,float,string);
    void DespliegaMusgos();
    void musgos();

};

#endif /* MUSGOS_H */