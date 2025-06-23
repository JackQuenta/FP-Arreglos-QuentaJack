/*18. Dada una frase comprobar si el balanceo de los par�ntesis es correcto. Es decir, �(ccc(ccc)cc((ccc(c))))� es
correcto, pero �)ccc(ccc)cc((ccc(c)))(� no lo es, aunque tenga el mismo n�mero de par�ntesis abiertos que
cerrados.
*/
#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

bool parentesisBalanceados(char frase[]) {
    int contador = 0;

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == '(') {
            contador++;
        } else if (frase[i] == ')') {
            contador--;
            if (contador < 0) {
                return false;
            }
        }
    }

    return contador == 0;
}

int main() {
    setlocale(LC_ALL, "");
    char texto[300];

    cout << "Ingrese una frase con par�ntesis: ";
    cin.getline(texto, 300);

    if (parentesisBalanceados(texto)) {
        cout << "Los par�ntesis est�n correctamente balanceados por cada abierto hay uno cerrado." << endl;
    } else {
        cout << "Los par�ntesis NO est�n balanceados." << endl;
    }

    return 0;
}
