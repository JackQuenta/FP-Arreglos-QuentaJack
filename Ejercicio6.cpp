/*6. Calcular la suma de componentes de �ndice par e impar en un vector.*/
#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "");
	
    int n;
    cout << "�Cu�ntos elementos tendr� el vector? ";
    cin >> n;

    int vector[n];
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> vector[i];
    }

    int sumaPar = 0, sumaImpar = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sumaPar += vector[i];
        } else {
            sumaImpar += vector[i];
        }
    }

    cout << "\nSuma de �ndices pares: " << sumaPar << endl;
    cout << "Suma de �ndices impares: " << sumaImpar << endl;

    return 0;
}
