#include <iostream>
using namespace std;

int main() {
    int min1, seg1, min2, seg2;
    cout << "Ingrese los minutos y segundos del primer atleta: ";
    cin >> min1 >> seg1;
    cout << "Ingrese los minutos y segundos del segundo atleta: ";
    cin >> min2 >> seg2;

    int totalSeg = seg1 + seg2;
    int totalMin = min1 + min2 + totalSeg / 60;
    int totalHor = totalMin / 60;

    cout << "El tiempo total utilizado por ambos atletas es: \n" << totalHor << " horas\n" << totalMin % 60 << " minutos \n" << totalSeg % 60 << " segundos" << endl;

    return 0;
}

