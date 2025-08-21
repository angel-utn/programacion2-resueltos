#include <iostream>
using namespace std;

void cargarListaNumeros(int listaNumeros[], int tamanio){
  for(int i=0; i<tamanio; i++){
    cin >> listaNumeros[i];
  }
}

void contarPositivosyNegativos(int listaNumeros[], int tamanio, int &cantNegativos, int &cantPositivos){
  for(int i=0; i<tamanio; i++){
    if(listaNumeros[i] < 0){
      cantNegativos++;
    } 
    else if(listaNumeros[i] > 0){
      cantPositivos++;
    }
  }
}

void completarPositivos(int listaNumeros[], int tamanio, int vectorPositivos[], int cantPositivos){
  int j = 0;
  for(int i=0; i<tamanio; i++){
    if(listaNumeros[i] > 0){
      vectorPositivos[j] = listaNumeros[i];
      j++;
    }
  }
}

void completarNegativos(int listaNumeros[], int tamanio, int vectorNegativos[], int cantNegativos){
  int j = 0;
  for(int i=0; i<tamanio; i++){
    if(listaNumeros[i] < 0){
      vectorNegativos[j] = listaNumeros[i];
      j++;
    }
  }
}

void mostrarVector(int vector[], int tamanio){
  for(int i=0; i<tamanio; i++){
    cout << vector[i] << " ";
  }
  cout << endl;
}


int main(){
  const int TAMANIO = 10;
  int listaNumeros[TAMANIO] = {10, 78, -4, -6, -100, 33, 45, -10, 34, 12};
  int cantNegativos = 0, cantPositivos = 0;
  int *vectorNegativos = nullptr, *vectorPositivos = nullptr;

  // Solicitamos al usuario la carga de los números. Comentar para utilizar los valores de inicialización.
  cargarListaNumeros(listaNumeros, TAMANIO);
  contarPositivosyNegativos(listaNumeros, TAMANIO, cantNegativos, cantPositivos);

  // Pedimos memoria para los vectores de negativos y positivos
  vectorNegativos = new int[cantNegativos];
  vectorPositivos = new int[cantPositivos];

  if (vectorNegativos == nullptr || vectorPositivos == nullptr) {
    cout << "Error al asignar memoria." << endl;
    return 1;
  }

  // Llenamos los vectores con los números negativos y positivos
  completarPositivos(listaNumeros, TAMANIO, vectorPositivos, cantPositivos);
  completarNegativos(listaNumeros, TAMANIO, vectorNegativos, cantNegativos); 

  // Mostramos los resultados. Primero los positivos y luego los negativos.
  cout << "Números positivos: ";
  mostrarVector(vectorPositivos, cantPositivos);
  cout << "Números negativos: ";
  mostrarVector(vectorNegativos, cantNegativos);
  
  // Liberamos la memoria asignada
  delete[] vectorNegativos;
  delete[] vectorPositivos;

  return 0;
}