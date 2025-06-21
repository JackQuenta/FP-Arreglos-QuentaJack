/*10. Generar 30 números aleatorios entre 100 y 1000 guardarlos en un arreglo y calcular estadísticas de 
tendencia central media, mediana y moda.*/
#include<iostream>
#include<cstdlib>
#include<ctime>
#include <locale.h>
using namespace std;

int i, j;
int main(){
	setlocale(LC_CTYPE, "");
	
	int arreglo[30], contador = 0, suma = 0;
	float promedio, mediana;
	
	srand(time(0));
	
	cout<<"Números aleatorios: "<<endl;
	cout<<endl;
	for(i=0; i<30; i++){
		arreglo[i]=rand()%901+100;
		cout<<"Número aleatorio "<<i+1<<" = "<<arreglo[i]<<endl;
	}
	
	for(i=0; i<30; i++){
		suma = suma + arreglo[i];
	}
	cout<<endl;
	
	promedio=suma/30.0;
	cout<<"\nMEDIA = "<<promedio;
	for(i=0; i < 30-1; i++) {
		
    	for(j=0; j < 30-i-1; j++) {
        if(arreglo[j] > arreglo[j+1]) {
            int temp= arreglo[j];
            arreglo[j]= arreglo[j + 1];
            arreglo[j+1]= temp;
        }
    	}
	}
	
	for(i=0; i<1; i++){
		
		mediana = (arreglo[i+14]+arreglo[i+15])/2.0;
		cout<<"\nMEDIANA = "<<mediana;
	}
	
	int moda = arreglo[0];
	int frecuencia = 1;
	
	for(i=0; i<30; i++){
		
		for(j=0; j<30; j++){
			if(arreglo[i] == arreglo[j]){
				contador = contador + 1;
			}
		}
		if(contador > frecuencia){
			frecuencia = contador;
			moda = arreglo[i];
		}
	}
	cout<<"\nMODA = "<<moda;
	
	return 0;
}
