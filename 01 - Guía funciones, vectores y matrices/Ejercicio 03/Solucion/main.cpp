#include <iostream>
#include <string>
#include "funciones.h"
using namespace std;


int main()
{
    float totalCategoria[10] = {};
    int cantidadGastosPorDia[31] = {};
    string nombresCategorias[10] = { "Servicios", "Alimentación", "Limpieza", "Transporte", "Educación", "Salud", "Ocio", "Impuestos", "Vestimenta", "Inversiones" };

    cargarDatos(totalCategoria, cantidadGastosPorDia);

    puntoA(totalCategoria, nombresCategorias);
    puntoB(totalCategoria, nombresCategorias);
    puntoC(totalCategoria);
    puntoD(cantidadGastosPorDia);


    return 0;
}
