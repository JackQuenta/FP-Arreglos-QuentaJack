/*3. Contar la ocurrencia de una letra específica en una cadena de entrada */
#include <iostream>
#include <string>
#include <locale.h>
#include <windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	setlocale(LC_CTYPE	,"");
	
    string texto;
    char letra;
    int contador = 0;

    cout << "Ingrese una oración: ";
    getline(cin, texto);

    cout << "Ingrese la letra que desea contar: ";
    cin >> letra;

    for (int i = 0; i < texto.length(); i++) {
        if (texto[i] == letra) {
            contador++;
        }
    }

    cout << "La letra '" << letra << "' aparece " << contador << " veces." << endl;
    return 0;
}
