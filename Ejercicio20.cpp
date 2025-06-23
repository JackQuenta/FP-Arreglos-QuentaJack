/*20. Solicite al contador del almacén La Milagrosa el monto de las ventas mensuales de todo el año 2020. Luego,
el contador desea obtener los siguientes resultados:
• Valor de la venta mensual promedio.
• Obtenga el porcentaje de los meses del año que cumplieron los siguientes niveles de ventas:
						**********************************************
						* Nivel ventas  *       Descripción          *
						**********************************************
						*  Mínimo       * Menos del 40% del promedio *
						*               * anual de ventas            *
						**********************************************
						*  Regular      * Entre el 40% a 75% del     *
						*               * promedio de ventas         *
						**********************************************
						*  Excelente    * Más del 75% del promedio   *
						*               * mensual                    *
						**********************************************
• Indique los nombres de los meses (enero, febrero, etc.) en los cuales la venta fue Excelente.*/
#include<iostream>
#include<iomanip>
#include<locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    float ventas[12], promedio = 0;
    string meses[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
                        "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    int minimos = 0, regulares = 0, excelentes = 0;

    for (int i = 0; i < 12; i++) {
        cout << "Ingrese las ventas de " << meses[i] << ": ";
        cin >> ventas[i];
        promedio += ventas[i];
    }

    promedio /= 12;

    cout << fixed << setprecision(2);
    cout << "\nPromedio anual de ventas mensuales: " << promedio << endl;

    cout << "\nMeses con ventas excelentes:\n";

    for (int i = 0; i < 12; i++) {
        float porcentaje = (ventas[i] * 100) / promedio;

        if (porcentaje < 40.0) {
            minimos++;
        } else if (porcentaje <= 75.0) {
            regulares++;
        } else {
            excelentes++;
            cout << "- " << meses[i] << " (" << ventas[i] << ")" << endl;
        }
    }

    cout << "\nPorcentaje de meses con ventas:\n";
    cout << "Mínimo: " << (minimos * 100 / 12.0) << "%" << endl;
    cout << "Regular: " << (regulares * 100 / 12.0) << "%" << endl;
    cout << "Excelente: " << (excelentes * 100 / 12.0) << "%" << endl;

    return 0;
}
