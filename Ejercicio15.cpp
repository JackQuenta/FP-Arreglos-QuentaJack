/*15. Generar la función mistrcmp(str1,str2) que compara dos cadenas y retorna los resultados 0 si las cadenas 
son iguales, 1 si la cadena str1 >str2, -1 si la cadena str2>str1. No usar las funciones de String.h*/
#include <iostream>
#include <locale.h>
using namespace std;

int compararTexto(char textoA[], char textoB[]) {
    int pos = 0;

    while (textoA[pos] != '\0' && textoB[pos] != '\0') {
        if (textoA[pos] > textoB[pos]) {
            return 1;
        } else if (textoA[pos] < textoB[pos]) {
            return -1;
        }
        pos++;
    }

    if (textoA[pos] == '\0' && textoB[pos] == '\0') {
        return 0;
    } else if (textoA[pos] == '\0') {
        return -1;
    } else {
        return 1;
    }
}

int main() {
    setlocale(LC_CTYPE, "");

    char cadena1[100];
    char cadena2[100];
    int resultado;

    cout << "Ingrese la primera cadena: ";
    cin >> cadena1;
    cout << "Ingrese la segunda cadena: ";
    cin >> cadena2;

    resultado = compararTexto(cadena1, cadena2);

    if (resultado == 0) {
        cout << "[0] Las cadenas son exactamente iguales." << endl;
    } else if (resultado == 1) {
        cout << "[1] La primera cadena tiene mayor valor." << endl;
    } else {
        cout << "[-1] La segunda cadena tiene mayor valor." << endl;
    }

    return 0;
}
