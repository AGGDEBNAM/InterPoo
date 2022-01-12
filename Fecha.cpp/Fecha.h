#ifndef FECHA_H
#define FECHA_H

class Fecha 
{
private:        // lo privado es sinonimo de lo encapsulado
    int m, d, a;
    long fe;
    int diasmes[12];
public:
    Fecha(long f);
    int   Anio(long f);
    Fecha Ayer();
    void  Despliega();
    int   Dia(long f);
    bool  DiaHabil();
    int   DiaSemana(int);
    long  DomingoPascua(int Anio);
    bool  EsBisiesto();
    bool  EsBisiesto(int an);
    bool  EsValida();
    int   FechaADias();
    Fecha MenosXDias(int dias);
    int   Mes(long f);
};

#endif /* FECHA_H */