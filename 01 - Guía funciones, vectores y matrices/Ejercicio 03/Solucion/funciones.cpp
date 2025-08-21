#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


void cargarDatos(float totalCategoria[], int cantidadGastosPorDia[]) {
		int dia, idCategoria;
		float importe;

		cout << "Dia: ";
		cin >> dia;

    while (dia != 0) {

        int idCategoria;
        cout << "ID de Categoria (1..10): ";
        cin >> idCategoria;

        cout << "Importe (>= 0): ";
        cin >> importe;

        totalCategoria[idCategoria - 1] += importe;
        cantidadGastosPorDia[dia - 1] ++;

				cout << "----------------------------------" << endl;

				cout << "Dia: ";
				cin >> dia;
    }
}

void puntoA(float totalCategoria[],  string nombresCategorias[]) {
    int idCategoriaMax = 0;
    float maximoValor = totalCategoria[0];

    for (int i = 1; i < 10; ++i) {
        if (totalCategoria[i] > maximoValor) {
            maximoValor = totalCategoria[i];
            idCategoriaMax = i;
        }
    }

    cout << "\n=== Punto A: Categoria de mayor gasto ===\n";

    cout << "ID: " << (idCategoriaMax + 1)
         << " | Categoria: " << nombresCategorias[idCategoriaMax]
         << " | Total: $" << maximoValor << "\n";
}

void puntoB(float totalCategoria[], string nombresCategorias[]) {
    cout << "\n=== Punto B: Totales por categoria ===\n";

		cout << "ID\tNOMBRE\tTOTAL" << endl;

    for (int i = 0; i < 10; i++) {
        cout << i+1 << "\t" << nombresCategorias[i] << "\t" << totalCategoria[i] << endl;
    }
}

void puntoC(float totalCategoria[]) {
    int categoriasSinGastos = 0;
    for (int i = 0; i < 10; i++) {
        if (totalCategoria[i] == 0.0f) {
            categoriasSinGastos++;
        }
    }
    cout << "\n=== Punto C: Categorias sin movimientos ===\n";
    cout << "Cantidad: " << categoriasSinGastos << "\n";
}

void puntoD(int cantidadGastosPorDia[]) {
    // D) Por cada dia, cantidad de gastos (solo dias con gastos)
    cout << "\n=== Punto D: Cantidad de gastos por dia ===\n";
    for (int d = 0; d < 31; d++) {
            cout << "Dia " << (d + 1) << ": " << cantidadGastosPorDia[d] << " gastos\n";
    }
}
