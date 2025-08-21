#include <iostream>
using namespace std;

bool buscarEnVector(int valorBuscado, int vectorABuscar[], int tamanio){

  for(int i=0; i<tamanio; i++){
    if (vectorABuscar[i] == valorBuscado){
      return true;
    }
  }

  return false;
}

int quitarRepetidos(int vectorSinProcesar[10], int vectorSinRepetidos[10]){
  int cantidadElementos = 0;

  for(int i=0; i<10; i++){
    int valorBuscado = vectorSinProcesar[i];

    if (buscarEnVector(valorBuscado, vectorSinRepetidos, cantidadElementos) == false){
      vectorSinRepetidos[cantidadElementos] = valorBuscado;
      cantidadElementos++;
    }
  }

  return cantidadElementos;
}


int main(){
  int vectorUno[10] = { 1, 2, 1, 2, 5, 5, 4, 4, 3, 3 };
  int vectorDos[10];

  int cantidadSinRepetir = quitarRepetidos(vectorUno, vectorDos);

  cout << "Hay " << cantidadSinRepetir << " elementos sin repetir. Los elementos son: " << endl;

  for(int i=0; i<cantidadSinRepetir; i++){
    cout << vectorDos[i] << endl;
  }

  return 0;
}
