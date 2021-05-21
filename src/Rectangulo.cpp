#include "Rectangulo.h"
#include <iostream>
using namespace std;
Rectangulo::Rectangulo(int alto_par, int ancho_par)
{
    alto=alto_par;
    ancho=ancho_par;
}
Rectangulo::Rectangulo()
{
    cout<<"alto: ";
    cin>>alto;
    cout<<"ancho: ";
    cin>>ancho;
}

Rectangulo::~Rectangulo()
{
    delete &alto;
    delete &ancho;
}

int Rectangulo::area()
{
    return alto*ancho;
}

