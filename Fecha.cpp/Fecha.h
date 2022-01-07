#ifndef FECHA_H
#define FECHA_H

class Fecha 
{
private:        // lo privado es sinonimo de lo encapsulado
    int m, d, a;
    long fe;
    int diasmes[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
public:
    Fecha(long f);
    int   Anio(long f);
    Fecha  Ayer();
    void  Despliega();
    int   Dia(long f);
    bool  EsBisiesto();
    bool  EsValida();
    int   Mes(long f);
};

#endif /* FECHA_H */