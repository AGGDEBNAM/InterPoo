#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <iostream>

#include "Especie.cpp"
#include "Especie.h"
#include "Planta.cpp"
#include "Planta.h"
#include "Angiospermas.cpp"
#include "Angiospermas.h"
#include "Briofitas.cpp"
#include "Briofitas.h"
#include "Rosales.cpp"
#include "Rosales.h"
#include "Musgos.cpp"
#include "Musgos.h"

using namespace std;

int l; // variable global

int main(int argc, char** argv) 
{
    //^ Especie
    cout << "\tEspecie"<<endl;
    cout <<"\t";
    for (int i = 0; i < 222; i++)
    {   
        cout << "_";
    }
    Especie e("Canis Lupus","Lobo",10072005,03012035,true,30);
    e.DespliegaEspecie();
    cout<<endl;
    e.especie();
    cout<<endl;
    e.Edad();
    cout<<endl;
    e.FechaMuerte();
    cout<<endl;
    cout<<endl;

    //^ Planta
    cout << "\tPlanta"<<endl;
    cout <<"\t";
    for (int i = 0; i < 222; i++)
    {   
        cout << "_";
    }
    Planta p("Orchidaceae","Orquidia",0,0,true,12,29);
    p.DespliegaPlanta();
    cout<<endl;
    p.planta();
    cout<<endl;
    cout<<endl;

    //^ Angiosperma
    cout << "\tAngiosperma"<<endl;
    cout <<"\t";
    for (int i = 0; i < 222; i++)
    {   
        cout << "_";
    }
    Angiospermas a("Orchidaceae","Orquidia",0,0,true,4,5,122);
    a.DespliegaAngiospermas();
    cout<<endl;
    a.angiospermas();
    cout<<endl;
    cout<<endl;

    //^ Briofitas
    cout << "\tBriofitas"<<endl;
    cout <<"\t";
    for (int i = 0; i < 222; i++)
    {   
        cout << "_";
    }
    Briofitas b("Bryopsida","Musgo",0,0,true,3,7,4);
    b.DespliegaBriofitas();
    cout<<endl;
    b.briofitas();
    cout<<endl;
    cout<<endl;

    //^ Rosales
    cout << "\tRosales"<<endl;
    cout <<"\t";
    for (int i = 0; i < 222; i++)
    {   
        cout << "_";
    }
    Rosales r("Tulipa","Tulipan",0,0,true,1.5,1.2,15,"Rojo");
    r.DespliegaRosales();
    cout<<endl;
    r.rosales();
    cout<<endl;
    cout<<endl;

    //^ Musgos
    cout << "\tMusgos"<<endl;
    cout <<"\t";
    for (int i = 0; i < 222; i++)
    {   
        cout << "_";
    }
    Musgos m("Weymouthia mollis","Musgo enredadera",0,0,true,7,3,60,"Areas frias y humedas");
    m.DespliegaMusgos();
    cout<<endl;
    m.musgos();
    cout<<endl;
    cout<<endl;
}
