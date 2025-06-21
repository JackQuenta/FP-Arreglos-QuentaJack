/*13. Generar la función mistrcpy(str1,str2) que copia str2 en str1. No usar funciones de String.h */
#include <iostream>
#include <locale.h>
using namespace std;

void mistrcpy(char destino[], char origen[]) {
    int i = 0;
    while (origen[i] != '\0') {
        destino[i] = origen[i];
        i++;
    }
    destino[i] = '\0';
}

int main() {
    setlocale(LC_CTYPE, "");

    char str1[100];
    char str2[100];

    cout << "Escriba una palabra (str2): ";
    cin >> str2;

    mistrcpy(str1, str2);

    cout << "Palabra copiada en (str1): " << str1 << endl;

    return 0;
}
