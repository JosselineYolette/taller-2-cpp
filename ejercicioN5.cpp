
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> distancias = {50, 55, 57, 58, 60};
    int maxMillas ;
    int numPueblos ;
    
    cout<<"ingresa el numero maximo de millas";
    cin>>maxMillas;
    cout<<"ingresa el numero de pueblos";
    cin>>numPueblos;

    sort(distancias.begin(), distancias.end(), greater<int>());

    int suma = 0;
    for (int i = 0; i <= numPueblos; i++) {
        if (suma + distancias[i] <= maxMillas) {
            suma += distancias[i];
            cout << "Elegir la distancia " << distancias[i] << endl;
        }
    }

    cout << "La suma de las distancias elegidas es: " << suma << endl;

    return 0;
}
