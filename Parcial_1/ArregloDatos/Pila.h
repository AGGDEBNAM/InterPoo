#ifndef PILA_H
#define PILA_H

#define TAMPILA 10

class Pila 
{
private:
    int pila[TAMPILA];
    int tope;
public:
    Pila();
    int  Cardinalidad();
    void Despliega();
    bool Elimina(int*);
    bool EsElemento(int);
    bool EsLlena();
    bool EsVacia();
    bool Inserta(int);
};

#endif /* PILA_H */
