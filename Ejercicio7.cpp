/*7. Invertir un vector e imprimirlo*/
#include <iostream>
#include <vector>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "");

	int n;
	cout << "¿Cuántos elementos tendrá el vector? ";
	cin >> n;

	vector<int> vec(n);

	for (int i = 0; i < n; i++) {
		cout << "Elemento " << i + 1 << ": ";
		cin >> vec[i];
	}

	cout << "\nVector invertido:\n";
	for (int i = n - 1; i >= 0; i--) {
		cout << vec[i] << " ";
	}
	cout << endl;

	return 0;
}
