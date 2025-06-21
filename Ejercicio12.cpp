/*12. Implementar una función que reciba un vector, su longitud y retorne true si el mismo se encuentra ordenado, 
false en caso contrario. */
#include <iostream>
#include <vector>
#include <locale.h>
using namespace std;

bool estaOrdenado(vector<int>& numeros, int cantidad) {
    for (int i = 0; i < cantidad - 1; i++) {
        if (numeros[i] > numeros[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    setlocale(LC_CTYPE, "");

    int cantidad;
    cout << "¿Cuántos números ingresará? ";
    cin >> cantidad;

    vector<int> numeros(cantidad);
    for (int i = 0; i < cantidad; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    bool ordenado = estaOrdenado(numeros, cantidad);

    if (ordenado) {
        cout << "El vector está ordenado." << endl;
    } else {
        cout << "El vector no está ordenado." << endl;
    }

    return 0;
}
