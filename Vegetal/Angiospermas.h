#ifndef ANGIOSPERMAS_H
#define ANGIOSPERMAS_H

#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <iostream>

#include "Especie.h"
#include "Planta.h"

class Angiospermas :public Planta
{
private:
protected:
    int DiasFloracion;
public:
    Angiospermas(string,string,long,long,bool,int,int,int);
    virtual void DespliegaAngiospermas();
    void angiospermas();

};

#endif /* ANGIOSPERMAS_H */