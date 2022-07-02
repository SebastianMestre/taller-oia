# Primalidad

### ¿Cómo se si un numero X es primo?

Cuento cuantos divisores tiene. Si tiene exactamente 2, es primo.

Para hacer esto, podemos iterar por todos los enteros desde `1` hasta `X`, y guardar en un contador cuantos de ellos son dividen a `X`.

Podemos ahorrar un poco comenzando la iteracion en `2`, y deteniendonos en `X-1`. Luego, podemos frenar apenas encontramos un divisor de `X`.

```c++
bool es_primo(int X) {
    if (X == 1) return false;

    for (int k = 2; k <= X-1; ++k)
        if (X % k == 0) return false;

    return true;
}
```

### Observación: No hace falta verificar numeros mayores a X/2

Algo interesante para observar es lo siguiente:

Si `p` fuera un divisor de `X` y fuera mayor a `X/2` y menor a `X`, tendriamos que `X/p` es un divisor de `X`, menor a `2` y mayor a `1`.

Pero si `X/p` fuera menor a `2` y menor a `1`, no sería un numero entero, por lo que `p` no sería un divisor de `X`.

De ahí, concluimos que no puede existir un divisor mayor a `X/2` y menor a `X`, por lo que nuestra iteración puede frenar al llegar a `X/2`.


### Observación: No hace falta verificar numeros mayores a X/3

Con un razonamiento similar al anterior, podemos concluir que no hay divisores de `X` mayores a `X/3` y menores a `X/2`. Aparte, si se verifica primero que `2` no es divisor de `X`, `X/2` tampoco sera divisor de `X`.

Entonces, si como primer paso verificamos que `X` no tenga a `2` como divisor, nuestra iteracion puede frenar al llegar a `X/3`.

```c++
bool es_primo(int X) {
    if (X == 1) return false;
    if (X % 2 == 0) return false;  // ***

    for (int k = 3; k <= X/3; ++k) // ***
        if (X % k == 0) return false;

    return true;
}
```

### Observación: No hace falta verificar numeros mayores a X/4

Nuevamente, podemos hacer el mismo razonamiento: siempre que verifiquemos que `X` no es multiplo de `2` ni de `3`, podemos detener nuestra iteracion al llegar a `X/4`.

```c++
bool es_primo(int X) {
    if (X == 1) return false;
    if (X % 2 == 0) return false;
    if (X % 3 == 0) return false;  // ***

    for (int k = 4; k <= X/4; ++k) // ***
        if (X % k == 0) return false;

    return true;
}
```

### Bastante repetitivo... ¿Se podrá generalizar?

Este razonamiento se puede extender arbitrariamente, y llegamos a lo siguiente: Si `X` no es multiplo de ningun entero `2, 3, ..., p-1, p`, entonces la iteracion puede detenerse en el paso `X/p`.

Para implementar esta idea, le podemos agregar otro parametro a la funcion `es_primo`, y hacer dos bucles.

El primer bucle verifica la condicion "`X` no es multiplo de ningun entero `2, 3, ..., p`" y el segundo verifica el resto de los posibles divisores.

```c++
bool es_primo(int X, int p) {         // ***
    if (X == 1) return false;

    for (int k = 2; k <= p; ++p)      // ***
        if (X % k == 0) return false; // ***

    for (int k = p+1; k <= X/p; ++k)  // ***
        if (X % k == 0) return false;

    return true;
}
```

Resulta ser optimo elegir `p = X/p`. Resolviendo, encontramos que `p = X/p = raiz(X)`.

En este caso, tenemos `X/p < p+1`, por lo que el segundo bucle no hace ninguna iteracion, y podemos eliminarlo.

Aparte, calcular raices cuadradas puede ser lento asique, como optimización, podemos usar la condición `k*k<=X`.

Entonces, llegamos a esta implementación:

```c++
bool es_primo(int X) {
    if (X == 1) return false;

    for (int k = 2; k*k <= X; ++k)
        if (X % k == 0) return false;

    return true;
}
```

### Demostracion matemática

Lxs lectorxs amantes de la matemática pueden revisar este esbozo de demostración:

Hipotesis: `X` es un numero natural, y no tiene divisores menores o iguales a `raiz(X)`.

Tesis: `X` no tiene divisores mayores a `raiz(X)`.

Demostración:

Utilizamos reduccion al absurdo: (osea, supongamos lo contrario de lo que queremos demostrar, y veamos que eso lleva a una contradicción lógica).

Supongamos que `p` es un divisor de `X`, mayor a `raiz(X)`.

Entonces, `q := X/p` es un natural y es divisor de `X`.

Como `p` es mayor a `raiz(X)`, entonces `q` debe ser menor a `raiz(X)`.

`q` es divisor de `X` y es menor a `raiz(X)`. Por lo tanto `X` tiene un divisor menor a raiz(X)

Pero esto contradice la hipotesis, asique no puede existir un `p` divisor de `X`, mayor a `raiz(X)`.

Concluimos que `X` no tiene divisores mayores a `raiz(X)`.