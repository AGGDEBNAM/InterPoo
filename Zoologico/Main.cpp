#include <cstdlib>
#include <iostream>

#include "Fecha.h"
#include "Fecha.cpp"

using namespace std;

int l; // variable global

int main(int argc, char** argv) 
{
    //^Animal
    long fec;
    cout << "Dame una fecha (AAAAMMDD): ";
    cin >> fec;
    Fecha f(fec);
    f.Despliega();
    int Anio = f.Anio(fec);
    cout << f << endl;
    

}