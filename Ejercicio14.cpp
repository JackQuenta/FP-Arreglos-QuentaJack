/*14. Generar la funci�n mistrcat(str1,str2) que agrega str2 al final de str1. No usar las funciones de String.h  */
#include <iostream>
#include <locale.h>
using namespace std;

void mistrcat(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0') {
        i++;
    }

    int j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
}

int main() {
    setlocale(LC_CTYPE, ""); 

    char str1[200]; 
    char str2[100];

    cout << "Ingrese la primera palabra u oraci�n: ";
    cin.getline(str1, 200);

    cout << "Ingrese la segunda palabra u oraci�n: ";
    cin.getline(str2, 100);

    mistrcat(str1, str2);

    cout << "\nResultado de juntarlos con (mistrcat): " << str1 << endl;

    return 0;
}
