#ifndef PLANTA_H
#define PLANTA_H

#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <iostream>

#include "Especie.h"

class Planta :public Especie
{
private:
protected:
    int PesoProduccionOxigeno;
public:
    Planta(string,string,long,long,bool,int,int);
    virtual void DespliegaPlanta();
    void planta();

};

#endif /* PLANTA_H */