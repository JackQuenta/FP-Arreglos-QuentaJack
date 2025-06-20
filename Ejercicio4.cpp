/*4. Leer una secuencia de nombres, ordenarlos alfabéticamente y presentarlos.  */
#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "");

    int cantidad;
    cout << "¿Cuántos nombres deseas ingresar? ";
    cin >> cantidad;
    cin.ignore(); 

    string nombres[cantidad]; 
    for (int i = 0; i < cantidad; i++) {
        cout << "Nombre " << i + 1 << ": ";
        getline(cin, nombres[i]); 
    }

    for (int i = 0; i < cantidad - 1; i++) {
        for (int j = 0; j < cantidad - i - 1; j++) {
            if (nombres[j] > nombres[j + 1]) {
                string aux = nombres[j];
                nombres[j] = nombres[j + 1];
                nombres[j + 1] = aux;
            }
        }
    }

    cout << "\nNombres ordenados alfabéticamente:\n";
    for (int i = 0; i < cantidad; i++) {
        cout << nombres[i] << endl;
    }

    return 0;
}
