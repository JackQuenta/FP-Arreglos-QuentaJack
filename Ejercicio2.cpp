/*2. Programa que haga "eco" de la entrada, poniendo cada palabra en una línea separada. */
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
    cout << "Ingresa una oración: ";
    getline(cin, oracion);

    for (int i = 0; i < oracion.length(); i++) {
        if (oracion[i] == ' ') {
            cout << endl;
        } else {
            cout << oracion[i];
        }
    }

    cout << endl;
    return 0;
}
