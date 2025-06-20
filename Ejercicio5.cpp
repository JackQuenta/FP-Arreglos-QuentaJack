/*5. Programa que lee n números, encuentra el mayor y el menor, y cuenta sus repeticiones*/
#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "");
	
    int n;
    cout << "¿Cuántos números vas a ingresar? ";
    cin >> n;

    int numeros[n];
    for (int i = 0; i < n; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    int mayor = numeros[0];
    int menor = numeros[0];
    int repMayor = 0;
    int repMenor = 0;

    for (int i = 1; i < n; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (numeros[i] == mayor) {
            repMayor++;
        }
        if (numeros[i] == menor) {
            repMenor++;
        }
    }

    cout << "\nMayor: " << mayor << " (se repite " << repMayor << " veces)" << endl;
    cout << "Menor: " << menor << " (se repite " << repMenor << " veces)" << endl;

    return 0;
}
