#ifndef SUELDOS_H
#define SUELDOS_H

class Sueldos 
{
private:
    int   idSueldo;
    int   idEmpleado;
    int   anio;
    float sueldo;
public:
    Sueldos(int = 0, int = 0, int = 0, float = 0.0); // constructor con valores predeterminados
    int get_anio();
    int IncrementoSueldo();   // regresa el nuevo idSueldo;
    float SueldoEmpleado();
    float SueldoEmpleadoAnual();
};

#endif /* SUELDOS_H */
