#include <iostream>
using namespace std;

int main() {
    float pies, metros;
    cout << "Ingrese la cantidad en pies: ";
    cin >> pies;
    cout << "Ingrese la cantidad en metros: ";
    cin >> metros;

    // Convertir pies a metros
    float totalMetros = pies * 0.3048 + metros;

    // Convertir a diferentes unidades
    float pulgadas = totalMetros / 0.0254;
    float yardas = totalMetros / 0.9144;
    float millas = totalMetros / 1609.34;

    cout << "La suma convertida a diferentes unidades es: " << endl;
    cout << pulgadas << " pulgadas" << endl;
    cout << yardas << " yardas" << endl;
    cout << totalMetros << " metros" << endl;
    cout << millas << " millas" << endl;

    return 0;
}
