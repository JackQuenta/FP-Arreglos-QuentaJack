/*19. Escribir un programa que dada una frase, determine si es un pal�ndromo o no. Un pal�ndromo es una frase
que, atendiendo s�lo a sus letras e ignorando los espacios, acentos, signos de puntuaci�n y tipo de letra
(may�scula o min�scula) expresa lo mismo le�da de izquierda a derecha que de derecha a izquierda. �d�bale
arroz a la zorra el abad�..
*/
#include<iostream>
#include<cstring>
#include<locale.h>
using namespace std;

char limpiarCaracter(char c) {
    switch (c) {
        case '�': case '�': return 'a';
        case '�': case '�': return 'e';
        case '�': case '�': return 'i';
        case '�': case '�': return 'o';
        case '�': case '�': return 'u';
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
        cout << "La frase S� es un pal�ndromo." << endl;
    } else {
        cout << "La frase NO es un pal�ndromo." << endl;
    }

    return 0;
}
