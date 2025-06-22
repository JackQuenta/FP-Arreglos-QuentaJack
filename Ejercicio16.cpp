/*16. Leer una línea de entrada. Descartar todos los símbolos excepto los dígitos. Convertir la cadena de dígitos en 
un entero y fijar el valor del entero a la variable n y finalmente sumarle 2 (las funciones atoi y isdigit te pueden 
ayudar para este propósito) Ejemplo: “En aproximadamente 120 días llegaremos al año 2022 y festejaremos” 
1202022 -> 1202024*/
#include <iostream>
#include <cctype>    
#include <cstdlib>   
#include <locale.h>  
using namespace std;

int main() {
	setlocale(LC_CTYPE, "");
	
    char texto[500];          
    char soloNumeros[500];    
    int posTexto = 0;          
    int posNum = 0;            
    int resultado;            

    cout << "Escribe una frase que tenga números mezclados: ";
    cin.getline(texto, 500);  

    while (texto[posTexto] != '\0') {  
        if (isdigit(texto[posTexto])) {  
            soloNumeros[posNum] = texto[posTexto];  
            posNum++; 
		}
        posTexto++;  
    }

    soloNumeros[posNum] = '\0';  

    resultado = atoi(soloNumeros);  
    resultado = resultado + 2;      

  
    cout << "El número final, luego de sumarle 2, es: ";
    cout << resultado << endl;

    return 0;
}
