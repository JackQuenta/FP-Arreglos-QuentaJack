/*19. Escribir un programa que dada una frase, determine si es un palíndromo o no. Un palíndromo es una frase
que, atendiendo sólo a sus letras e ignorando los espacios, acentos, signos de puntuación y tipo de letra
(mayúscula o minúscula) expresa lo mismo leída de izquierda a derecha que de derecha a izquierda. “dábale
arroz a la zorra el abad”..
*/
#include<iostream>
#include<cstring>
#include<locale.h>
using namespace std;

char limpiarCaracter(char c) {
    switch (c) {
        case 'á': case 'Á': return 'a';
        case 'é': case 'É': return 'e';
        case 'í': case 'Í': return 'i';
        case 'ó': case 'Ó': return 'o';
        case 'ú': case 'Ú': return 'u';
        default: return tolower(c);
    }
}


void limpiarFrase(const char frase[], char limpia[]) {
    int j = 0;
    for (int i = 0; frase[i] != '\0'; i++) {
        if (isalpha(frase[i])) {
            limpia[j++] = limpiarCaracter(frase[i]);
        }
    }
    limpia[j] = '\0';
}


bool esPalindromo(const char texto[]) {
    char limpio[300];
    limpiarFrase(texto, limpio);
    int largo = strlen(limpio);
    for (int i = 0; i < largo / 2; i++) {
        if (limpio[i] != limpio[largo - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    setlocale(LC_ALL, "");
    char frase[300];

    cout << "Ingrese una frase: ";
    cin.getline(frase, 300);

    if (esPalindromo(frase)) {
        cout << "La frase SÍ es un palíndromo." << endl;
    } else {
        cout << "La frase NO es un palíndromo." << endl;
    }

    return 0;
}
