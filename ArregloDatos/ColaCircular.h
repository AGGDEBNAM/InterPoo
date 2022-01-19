#ifndef COLACIRCULAR_H
#define COLACIRCULAR_H

#include "Cola.h"

class ColaCircular : public Cola
{
public:
    int  Cardinalidad();
    void Despliega();
    bool Elimina(int*);
    bool EsElemento(int);
    bool EsLlena();
    bool Inserta(int);
};

#endif /* COLACIRCULAR_H */
