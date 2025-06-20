/*1. Convertir palabras a mayúsculas iniciales: "cáceres patrimonio de la humanidad" ? "Cáceres Patrimonio De
La Humanidad"*/
#include <iostream>
#include <string>
#include <locale.h>
#include <windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	setlocale(LC_CTYPE	,"");
    string oracion;
    cout << "Ingrese una oración: ";
    getline(cin, oracion);

    for (int i = 0; i < oracion.length(); i++) {
        if (i == 0) {
            if (oracion[i] >= 'a' && oracion[i] <= 'z') {
                oracion[i] = oracion[i] - ('a' - 'A');
            }
        } else {
            if (oracion[i - 1] == ' ') {
                if (oracion[i] >= 'a' && oracion[i] <= 'z') {
                    oracion[i] = oracion[i] - ('a' - 'A');
                }
            }
        }
    }
	
    cout << "Oración con mayúsculas iniciales: " << oracion << endl;
    return 0;
}
