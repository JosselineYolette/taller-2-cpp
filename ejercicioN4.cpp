
#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char operacion;
    cout << "Ingrese dos números: ";
    cin >> num1 >> num2;
    cout << "Elija una operación (+, -, *, /): ";
    cin >> operacion;

    double resultado;
    switch (operacion) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            resultado = num1 / num2;
            break;
        default:
            cout << "Operación inválida" << endl;
            return 0;
    }

    cout << "El resultado de la operación es: " << resultado << endl;

    return 0;
}
