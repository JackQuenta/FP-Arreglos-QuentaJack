/*6. Calcular la suma de componentes de �ndice par e impar en un vector.*/
#include <iostream>
#include <vector>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "");

	int n;
	cout << "�Cu�ntos elementos tendr� el vector? ";
	cin >> n;

	vector<int> vec(n); 

	for (int i = 0; i < n; i++) {
		cout << "Elemento " << i + 1 << ": ";
		cin >> vec[i];
	}

	int sumaPar = 0, sumaImpar = 0;

	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			sumaPar += vec[i];
		} else {
			sumaImpar += vec[i];
		}
	}

	cout << "\nSuma de �ndices pares: " << sumaPar << endl;
	cout << "Suma de �ndices impares: " << sumaImpar << endl;

	return 0;
}
