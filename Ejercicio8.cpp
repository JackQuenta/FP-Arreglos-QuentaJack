/*8. Comprobar si un n�mero de 10 cifras es capic�a usando un vector.*/
#include <iostream>
#include <vector>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "");

    string numero;
    cout << "Ingrese un n�mero: ";
    cin >> numero;

    vector<int> cifras;
    bool validador = true;

    for (int i = 0; i < numero.length(); i++) {
        if (numero[i] >= '0' && numero[i] <= '9') {
            cifras.push_back(numero[i] - '0');
        } else {
            validador = false;
            cout << "Solo se permiten d�gitos." << endl;
            i = numero.length(); 
        }
    }

    if (validador=true) {
        int inicio = 0;
        int fin = cifras.size() - 1;
        bool esCapicua = true;

        while (inicio < fin) {
            if (cifras[inicio] != cifras[fin]) {
                esCapicua = false;
                inicio = fin; 
            }
            inicio++;
            fin--;
        }

        if (esCapicua) {
            cout << "El n�mero es capic�a." << endl;
        } else {
            cout << "El n�mero no es capic�a." << endl;
        }
    }

    return 0;
}
