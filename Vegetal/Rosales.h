#ifndef ROSALES_H
#define ROSALES_H

#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <iostream>

#include "Especie.h"
#include "Planta.h"
#include "Angiospermas.h"

class Rosales :public Angiospermas
{
private:
protected:
    string ColorFlor;
public:
    Rosales(string,string,long,long,bool,int,int,int,string);
    void DespliegaRosales();
    void rosales();

};

#endif /* ANGIOSPERMAS_H */