# Ejercicios - Listas
Resolver los ejercicios que se encuentran en la siguiente ruta (Bloque C):
[link](https://github.com/ulima-lp/ejercicios-20231-fs/blob/main/03.md)

Las siguientes funciones pueden ser de utilidad para llegar a la solución de forma más rápida:

## Buscar un elemento en una lista
Puede utilizarse elem (retorna V o F).

```
    ghci> elem 12 [1, 2, 3, 4, 5]
    False
    ghci> elem 5 [1, 2, 3, 4, 5]
    True
``` 

## Ordenar una lista
Se debe importar la función sort, que pertenece al módulo Data.List.

```
    ghci> import Data.List (sort)
    ghci> sort [19, 2, 24, 7, 120, 77, 27]
    [2,7,19,24,27,77,120]
```

## Operador cons

Este operador que se representa con ":" puede ser utilizado para agregar un elemento a una lista. Por ejemplo:
```
    ghci> 12 : [1, 2, 3, 4, 5]
    [12,1,2,3,4,5]
```

También es posible utilizarlo para obtener el mismo resultado que con *head* y *tail*. Por ejemplo, podemos replantear la recursión del programa de suma de números de esta forma:

```
    sumList list (x : xs) = x + sumList(xs)
```

En este caso x representa el primer elemento (head) y xs (plural de x) representa el resto de elementos (tail).


