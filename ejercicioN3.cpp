#include <iostream>
using namespace std;

int main() {
    int numHijos, edadHijo, numHijosEscolares = 0;
    char viuda;
    cout << "Ingrese el número de hijos: ";
    cin >> numHijos;
    cout << "Ingrese la edad de cada hijo: ";
    for (int i = 0; i < numHijos; i++) {
        cin >> edadHijo;
        if (edadHijo >= 6 && edadHijo <= 18) {
            numHijosEscolares++;
        }
    }
    cout << "¿La madre es viuda? (S/N): ";
    cin >> viuda;

    float monto = 0.0;
    if (numHijos <= 2) {
        monto = 70.00;
    } else if (numHijos <= 5) {
        monto = 90.00;
    } else {
        monto = 120.00;
    }
    
    for(int i= 0 ; i<numHijosEscolares;i++){
        monto += 10.00;
    }

    if (viuda == 'S' || viuda == 's') {
        monto += 20.00;
    }

    cout << "El monto mensual que recibirá la familia es: " << monto<<".00" ;

    return 0;
}
