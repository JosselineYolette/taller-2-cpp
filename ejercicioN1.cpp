#include <iostream>
using namespace std;

int main() {
    int min1, min2, seg1, seg2;
    cout << "Ingrese el tiempo del primer atleta en minutos y segundos: <\n";
    cin >> min1 >> seg1;
    cout << "Ingrese el tiempo del segundo atleta en minutos y segundos: \n";
    cin >> min2 >> seg2;

    int totalMin = min1 + min2;
    int totalSeg = seg1 + seg2;

    // Convertir segundos a minutos
    totalMin += totalSeg / 60;
    totalSeg %= 60;

    // Convertir minutos a horas
    int totalHoras = totalMin / 60;
    totalMin %= 60;

    cout << "El tiempo total utilizado por ambos atletas es: " << totalHoras << " horas, " << totalMin << " minutos y " << totalSeg << " segundos." << endl;
    return 0;
}