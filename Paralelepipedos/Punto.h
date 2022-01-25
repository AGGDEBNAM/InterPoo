#ifndef PUNTO_H
#define PUNTO_H

class Punto 
{
private:
    float x, y;
public:
    Punto(float = 0.0, float = 0.0);
    void  Despliega();
    float Distancia(Punto p);
};

#endif /* PUNTO_H */