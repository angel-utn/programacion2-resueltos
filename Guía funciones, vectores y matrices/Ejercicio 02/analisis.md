## 1. Objetivo de la función

La función ```quitarRepetidos``` recibe dos vectores de enteros de tamaño 10.

- El primero (```vectorSinProcesar```) es el que contiene los números originales, posiblemente con repeticiones.

- El segundo (```vectorSinRepetidos```) será rellenado con los valores únicos que aparezcan en el primero.

- La función debe devolver la cantidad de elementos distintos encontrados.

## 2. Estrategia general

Para lograr esto necesitamos recorrer vectorSinProcesar elemento por elemento y decidir si ese valor ya fue guardado en vectorSinRepetidos.

- Si ya está → lo ignoramos.

- Si no está → lo agregamos en vectorSinRepetidos y aumentamos un contador de "elementos distintos".

Al terminar, ese contador se devuelve como resultado.

## 3. Ejemplo paso a paso
Con `vectorUno = { 1, 2, 1, 2, 5, 5, 4, 4, 3, 3 }`:

1. Procesar **1** → no estaba → agregar → `vectorDos = {1}`  
2. Procesar **2** → no estaba → agregar → `vectorDos = {1, 2}`  
3. Procesar **1** → ya estaba → ignorar  
4. Procesar **2** → ya estaba → ignorar  
5. Procesar **5** → no estaba → agregar → `vectorDos = {1, 2, 5}`  
6. Procesar **5** → ya estaba → ignorar  
7. Procesar **4** → no estaba → agregar → `vectorDos = {1, 2, 5, 4}`  
8. Procesar **4** → ya estaba → ignorar  
9. Procesar **3** → no estaba → agregar → `vectorDos = {1, 2, 5, 4, 3}`  
10. Procesar **3** → ya estaba → ignorar  

**Resultado final**:  
- `vectorDos = {1, 2, 5, 4, 3, …}`  
- Cantidad de elementos distintos = **5**  