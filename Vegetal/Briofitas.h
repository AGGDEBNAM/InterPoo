#ifndef BRIOFITAS_H
#define BRIOFITAS_H

#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <iostream>

#include "Especie.h"
#include "Planta.h"

class Briofitas :public Planta
{
private:
protected:
    float Centimetros;
public:
    Briofitas(string,string,long,long,bool,int,int,float);
    virtual void DespliegaBriofitas();
    void briofitas();

};

#endif /* BRIOFITAS_H */