/*11. Calcular la suma de elementos positivos y negativos en un arreglo.*/
#include<iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_CTYPE, "");

	int i, n, sumaTotal=0, sumaNegativo=0, sumaPositivo=0;
	int arreglo[n];
	cout<<"¿Cuántos elementos tendrá el arreglo?"<<endl;
	cin>>n;
	cout<<"Indique los elementos del arreglo: "<<endl;
	for(i=0; i<n; i++){
		cout<<"Elemento "<<i+1<<": ";
		cin>>arreglo[i];
		sumaTotal=sumaTotal+arreglo[i];
		
		if(arreglo[i]<0){
			sumaNegativo=sumaNegativo+arreglo[i];
		}else{
			sumaPositivo=sumaPositivo+arreglo[i];
		}
	}
	cout<<"La suma Total es: "<<sumaTotal<<endl;
	cout<<"La suma de elementos positivos es: "<<sumaPositivo<<endl;
	cout<<"La suma de elementos negativos es: "<<sumaNegativo<<endl;
	return 0;
} 
