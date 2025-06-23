/*17. Escriba una función que dado el nombre completo de una persona y un apellido, compruebe si el apellido
pertenece a esa persona.*/
#include<iostream>
#include<cstring>
#include<locale.h>
using namespace std;

bool contieneApellidoExacto(char nombreCompleto[], char apellido[]) {
    char* palabra = strtok(nombreCompleto, " ");
    while (palabra != NULL) {
        if (strcmp(palabra, apellido) == 0) {
            return true;
        }
        palabra = strtok(NULL, " ");
    }
    return false;
}

int main() {
    setlocale(LC_ALL, "");
    char datos[300];
    char apellido[100];
    bool resultado;

    cout << "Ingrese el nombre completo de la persona: ";
    cin.getline(datos, 300);

    cout << "Ingrese el apellido que desea verificar: ";
    cin.getline(apellido, 100);

    resultado = contieneApellidoExacto(datos, apellido);

    if (resultado) {
        cout << "El apellido SÍ pertenece a esa persona." << endl;
    } else {
        cout << "El apellido NO se encuentra como palabra exacta." << endl;
    }

    return 0;
}
