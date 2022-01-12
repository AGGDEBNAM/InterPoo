#ifndef COLA_H
#define COLA_H

#define TAMCOLA 10

class Cola 
{
private:
    int cola[TAMCOLA];
    int tope;
public:
    Cola();
    int  Cardinalidad();
    void Despliega();
    bool Elimina(int*);
    bool EsElemento(int);
    bool EsLlena();
    bool EsVacia();
    bool Inserta(int);
};

#endif /* COLA_H */