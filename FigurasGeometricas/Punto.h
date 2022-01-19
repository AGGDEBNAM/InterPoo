#ifndef PUNTO_H
#define PUNTO_H

class Punto 
{
private:
    float x, y;
public:
    Punto(float valx, float valy);
    void  Despliega();
    float Distancia(Punto p);
};

#endif /* PUNTO_H */