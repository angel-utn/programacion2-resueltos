## Estrategia de resolución

La solución procede en **dos pasadas** sobre el vector de entrada y usa **reserva dinámica** basada en el conteo previo.

1.  **Carga de datos**
    -   Leer 10 números en `listaNumeros` (arreglo de tamaño fijo = 10).
    -   (Opcional: se puede dejar una inicialización por defecto para pruebas.)
2.  **Conteo (1ª pasada)**
    -   Recorrer `listaNumeros` y contar cuántos **\> 0** y cuántos **< 0**.
    -   Guardar resultados en `cantPositivos` y `cantNegativos`.
3.  **Reserva dinámica exacta**
    -   Reservar `new int[cantPositivos]` para `vectorPositivos`.
    -   Reservar `new int[cantNegativos]` para `vectorNegativos`.
4.  **Llenado (2ª pasada)**
    -   Recorrer nuevamente `listaNumeros` y **copiar** los positivos en `vectorPositivos` y los negativos en `vectorNegativos`, **respetando el orden** original.
5.  **Salida y liberación**
    -   Mostrar primero el vector de positivos y luego el de negativos.
    -   Liberar memoria con `delete[]`.
