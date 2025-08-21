## 1. Datos de entrada

Por cada registro de gasto se indica la siguiente información:
- Día (entero 1...31)
- ID de Categoría (entero 1..10)
- Importe (real)

La información puede llegar **desordenada** y **no agrupada**. No se sabe la cantidad de registros hasta que se corte la carga de datos.

La carga de datos se indica con **día == 0**

## 2. Estructura de datos

Para resolver cada ejercicio utilizaremos vectores.

#### Punto 1
```La categoría de gasto que mayor dinero se haya destinado y cuál es dicha categoría.```

- Utilizaremos un vector de 10 elementos ```totalCategoria[10]``` de tipo ```float```
- Cada gasto realizado lo acumularemos según el ```ID Categoria-1```. Por ejemplo, ```totalCategoria[IDCategoria - 1] += importe;```
- Al finalizar la carga tendremos en cada posición del vector el total acumulado por categoría.

| pos | totalCategoria |
| --- | -------------- |
| 0   | 45000          |
| 1   | 34000          |
| 2   | 1230000        |
| 3   | 2300           |
| 4   | 34000          |
| 5   | 4000           |
| 6   | 5000           |
| 7   | 0              |
| 8   | 0              |
| 9   | 302000         |
| 10  | 0              |

- Buscamos el elemento del vector que tenga el mayor valor. En el ejemplo es ```1230000``` que pertenece a la posición ``2`` del vector.

- La categoría a mostrar es ```3``` ya que el vector está indexado en base 0.

- Preferentemente mostramos el nombre de la categoría. En este caso, corresponde mostrar ```Limpieza```.

#### Punto 2

```B) Por cada categoría de gasto, el nombre de la categoría y el total acumulado en concepto de gastos del mes.```

- Reutilizaremos el mismo vector con que acumulamos los gastos por categoría del Punto 1.
- Anexamos un vector de 10 elementos de ```string``` que registre los diez nombres de los gastos.
- Por cada uno de ellos mostraremos el IDCategoria, el nombre de la categoría y el contenido del vector que representa el total gastado.

#### Punto 3
```C) La cantidad de categorías de gasto que no hayan registrado movimientos.```

- Reutilizaremos el mismo vector con que acumulamos los gastos por categoría del Punto 1.
- Cada vez que un elemento del vector (el total gastado de una categoría) es igual a cero. Acumulamos en una variable que utilizaremos para contar. Por ejemplo: ```categoriasSinGasto++```
- Luego de recorrer el vector completo mostrar el valor de ```categoriasSinGasto``` que registrará la cantidad solicitada.

#### Punto 4
````D) Por cada día, la cantidad de gastos que se hayan registrado. Sólo mostrar aquellos registros de días que hayan registrado gastos.````

- Utilizaremos un vector de 31 elementos. Por ejemplo, ```cantidadGastosPorDia``` de tipo ```int```.
- Cada registro de gasto procesado tiene un día (entre 1 y 31). Por lo que, en la posición que corresponde al día ingresado contaremos un gasto en el vector de ```cantidadGastosPorDia```. Utilizaremos la misma estrategia que en el Punto 1 pero contando en lugar de acumular. ```cantidadGastosPorDia[dia - 1]++;```.
- Recorremos cada uno de los elementos del vector mostrando el número de día y la cantidad de gastos contabilizada.