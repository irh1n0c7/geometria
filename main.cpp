#include <iostream>

#include "Rectangulo.h"

using namespace std;

// Formateado por bryce
int main() {
    cout << "AREA DE FIGURAS GEOMETRICAS.\n\n";
    cout << "Lista de figuras geometricas.\n\n";
    cout << "1: rectangulo.\n";
    cout << "2: triangulo\n";
    cout << "3: circulo.\n";
    string opcion;
    cin >> opcion;
    if (opcion == "rectangulo") {
        Rectangulo figu_rectangulo;
        cout << figu_rectangulo.area() << "\n";
    }
}