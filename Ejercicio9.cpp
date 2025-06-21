/*9. Rotar las componentes de un vector una posici�n hacia la derecha.*/
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

    int ultimo = vec[n - 1];
    for (int i = n - 1; i > 0; i--) {
        vec[i] = vec[i - 1];
    }
    vec[0] = ultimo;

    cout << "\nVector rotado una posici�n a la derecha:\n";
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
