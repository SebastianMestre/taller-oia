# Nivel 1

Este documento contiene explicaciones de todos los temas de nivel 1

> Por el momento está incompleto, se aceptan contribuciones

# Temario

## Matemática

- Enteros, operaciones aritmeticas, comparacion
- Sistemas de numeracion, conversion entre ellos
- Propiedades de los enteros (signo, paridad, divisibilidad)
- Aritmetica modular (suma, resta, multiplicacion)
- Fracciones, porcentajes
- Numeros primos

## Programación

- Variables, tipos, expresiones y asignacion
- Variables globales y locales
- Entrada y salida (con archivos y E/S estandar)
- Control de flujo: seleccion y repeticion
- Funciones y pasaje de parametros en ambos sentidos
- Descomposicion de problemas (pensamiento top-down)

## Estructuras de datos

### Simples

- booleanos
- enteros
- caracteres

### Compuestas

- Arreglos unidimensionales
- Cadenas

## Algoritmos

### Algoritmos con enteros

- Cambio de base
- Test de primalidad (buscar divisores hasta la raiz)
- Factorizacion (buscando divisores)

### Manipulacion de arreglos

- llenar
- desplazar
- rotar
- invertir
- reducciones (minimo, maximo, suma, etc.)
- sumas parciales
- busqueda lineal

### Manipulacion de cadenas

- busqueda de una cadena dentro de otra
- convertir entre mayusculas y minusculas

# Problemas de ejemplo

- Construir un arreglo con ciertos elementos especiales de un conjunto (Ej: El maximo, los numeros primos, los divisibles por 7 y por 11, etc)
- Convertir numeros entre sistemas de numeracion
- Realizar operaciones con n ́umeros y escribir sus resultados
- Procesar un texto identificando cadenas que contienen ciertas subcadenas definidas
- Procesar un texto identificando o corrigiendo palabras de acuerdo a un criterio definido (identificar palindromos, mayusculas/minusculas, letras prohibidas, etc)

# Introduccion

# Algoritmos con enteros

## Test de primalidad

Para saber si un numero `X` es primo, contamos cuantos divisores tiene. Si tiene exactamente 2, es primo. Para hacer esto, podemos iterar por todos los enteros desde `1` hasta `X`, y guardar en un contador cuantos de ellos son dividen a `X`.

Como `1` y `X` siempre son divisores de `X` (para cualquier `X`), podemos ahorrar un poco de tiempo comenzando la iteracion en `2`, y deteniendonos en `X-1`. Entonces, un numero es primo si es distinto de 1 y el contador termina en 0. Para mejorar un poco esa idea, podemos cortar apenas encontramos un divisor.

Se puede mejorar aun más cortando la iteración al llegar a `raiz(X)`. Juntando estas ideas, se puede llegar a esta implementacion.

```c++
bool es_primo(int X) {
    if (X == 1) return false;

    for (int k = 2; k*k <= X; ++k)
        if (X % k == 0) return false;

    return true;
}
```

Se puede encontrar la justificacion de esto en el documento `primalidad.md`.

# Algoritmos con arreglos

## Inversion

Invertir un arreglo es reordenar sus elementos de atras para adelante

podemos lograr esto con un algoritmo de dos punteros....

## Rotacion

## Busqueda lineal

## Reducciones

## Sumas parciales

# Algoritmos con cadenas