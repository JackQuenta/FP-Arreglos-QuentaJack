/*18. Dada una frase comprobar si el balanceo de los paréntesis es correcto. Es decir, “(ccc(ccc)cc((ccc(c))))” es
correcto, pero “)ccc(ccc)cc((ccc(c)))(“ no lo es, aunque tenga el mismo número de paréntesis abiertos que
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

    cout << "Ingrese una frase con paréntesis: ";
    cin.getline(texto, 300);

    if (parentesisBalanceados(texto)) {
        cout << "Los paréntesis están correctamente balanceados por cada abierto hay uno cerrado." << endl;
    } else {
        cout << "Los paréntesis NO están balanceados." << endl;
    }

    return 0;
}
