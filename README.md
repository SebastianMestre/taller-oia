# Introducción

Este es un apunte de programación competitiva, dirigido a estudiantes del politécnico que participan del taller de OIA. Incluye información sobre C++, algoritmos, y consejos para tener en cuenta a la hora de competir. Se presupone un entorno basado en Linux.

Aparte, en el mismo repositorio hay un curso de C++, el lenguaje de programación que se usa en OIA e IOI.

## Enlaces útiles

- [Juez de la OIA](http://juez.oia.unsam.edu.ar/) - Sitio para leer y enviar soluciones a problemas de la OIA
- [Foro de la OIA](http://foro.oia.unsam.edu.ar/) - Sitio para discutir y pedir ayuda
- [Wiki de la OIA](http://wiki.oia.unsam.edu.ar/) - Sitio con recursos sobre el contenido de la OIA
- [CSES](https://cses.fi/problemset/) - Lista de problemas educativos (en inglés)
- [Competitive Programmer's Handbook (pdf)](https://cses.fi/book.pdf) - Libro gratuito sobre programación competitiva (en inglés)
- [uHunt](https://uhunt.onlinejudge.org/id/339) - Lista de problemas educativos (en inglés)
- [Competitive Programming](https://cpbook.net/) - Libro pago sobre programación competitiva (en inglés, con traducción al español)
- [Codeforces](https://codeforces.com/) - Sitio para competir, charlar, y practicar (en inglés)

## Puntaje

En la OIA, cada problema puede otorgar un máximo de 100pts.

Para obtener este puntaje, el participante debe enviar una solución que solucione los
casos de prueba (que son secretos) de forma correcta y con un rendimiento adecuado.

Si la solución de un participante no cumple con los requisitos del problema, puede
recibir puntaje parcial, o no recibir ningún punto. En estos casos el juez da un veredicto
que indica por qué no se otorgaron más puntos:

- WA/respuesta incorrecta: el código enviado no resuelve correctamente algunos casos.
- RTE/error de ejecución: el código enviado experimenta un error al ejecutar (suele ser el famoso segfault).
- CE/error de compilación: el código enviado experimenta un error al compilar.
- TLE/límite de tiempo excedido: el código enviado tarda demasiado tiempo en ejecutar.
- MLE/liḿite de memoria excedido: el código enviado usa demasiada memoria

Para determinar el puntaje parcial, cada problema define condiciones distintas pero se
siguen un par de reglas.

Primero, el problema se divide en subtareas, que son versiones
especializadas y más faciles del problema, donde cada una aporta una cantidad de puntos
menor a 100.

Segundo, si se envia una solución que obtiene puntos en una subtarea, esos
puntos se mantienen permanentemente.

Tercero, los 100 puntos se obtienen resolviendo todas las subtareas.

Para aclarar, estudiemos esta situación: Primero se envia una solución que obtiene
15pts en la subtarea 1, y 0 en todas las demás. Después se envía una solucion que
obtiene 15pts en la subtarea 2, y 0 en todas las demás. En este caso, al participante
se le otorgan 30pts.

# Estrategia

Mas allá del conocimiento específico, competir requiere de una serie de habilidades
transversales. Esta sección apunta a armar a un participante con las herramientas
necesarias para afrontar una competencia sin volverse loco, y poder divertirse.

## Subtareas

En general es mala idea apuntar a sacar 100pts en un problema cuando hay
10pts o 15pts que salen fácil en ese u otro problema. Como regla de pulgar,
una vez que tenemos más de 0pts en todos los problemas podemos empezar a
pensar el caso general de algún problema.

Matemáticamente, la cuenta es muy fácil. Si esta relacion vale (y ojo que casi siempre vale)

    (probabilidad de sacar 15pts o más) x 15 > (probabilidad de sacar 100pts) x 100

entonces la conclusión es simple: **Hay que robar puntos**.

## Resolución de Problemas

Una de las herramientas mas poderosas del cerebro humano es la capacidad de
reconocer patrones y relaciones visualmente. Para aprovechar esto, recomiendo
hacer muchos dibujos. Algunas ideas:

- Dado un grafo, dibujarlo.
- Dados dos arrays de longitud N, interpretar los elementos de uno como coordenadas-x, y los del otro como coordenadas-y en el plano cartesiano.
- Dado un arbol, dibujarlo como un camino largo (un diámetro), y varias ramas chicas que le cuelgan.

**nota:** Estas ideas particulares dependen de conocimientos especificos, asique
está bueno releer esta sección tras aprender una nueva técnica.

## Estado Físico y Mental

En una competencia lo que más afecta nuestro rendimiento son los nervios, el cansancio
y el estado de ánimo. Algunas ideas para combatir estos efectos:

- tomar agua durante la competencia (la deshidratación en una competencia de 5 horas es muy real)
- ir al baño durante la competencia (alejarse de la competencia un rato ayuda a bajar los nervios)
- hacer competencias en internet para acostumbrarse


# C++

En la olimpiada usamos C++, una version mejorada de C que trae varias cosas que nos facilitan la vida.

Esta sección intenta dar los puntos más utiles de C++ (en cuanto a la OIA), para un estudiante que ya conoce C.

## g++ (compilar por consola)

Para compilar codigo en C por consola, se suele usar un comando como `gcc codigo.c -o mi_ejecutable`.

En C++ es muy parecido, pero se debe usar el comando `g++`.

Por ejemplo, para generar un ejecutable llamado `baldosas` a partir de un archivo de codigo fuente `baldosas.cpp`, escribimos `g++ baldosas.cpp -o baldosas`

## cin y cout (entrada y salida por consola)

```c++
// documentación:
// https://en.cppreference.com/w/cpp/io/cin
// https://en.cppreference.com/w/cpp/io/cout
cin >> x >> y;  // lee valores para las variables `x` e `y` por consola.
cout << x << y; // imprime las variables `x` e `y` por consola.
```

------------

Para leer y escribir en la consola, C++ trae el paquete `<iostream>` que hace entrada y salida, a diferencia de C, sin necesidad de explicitar los tipos de dato.

Por ejemplo, para leer dos enteros y luego imprimir su suma podemos escribir el siguiente código en C.

```c
#include<stdio.h>
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", a + b);
}
```

En cambio, el paquete `<iostream>` de C++ nos permite escribir los siguiente:

```c++
#include<iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    cout << (a + b) << '\n';
}
```

Linea por linea:

```c++
#include<iostream>
```

Incluye el paquete `<iostream>` (similar a incluir el paquete `<stdio.h>` en C)

```c++
using namespace std;
```

Esta linea nos ahorra tener que escribir `std::` al usar un componente de la biblioteca estandar de C++. Debe ir antes que el resto del codigo.

Si interesa saber mas, googleando "using namespace std" o "namespaces C++" aparece bastante rapido.

```c++
cin >> a >> b;
```

Aca leemos dos enteros por consola. Notemos que en ningun lado se especifica que a y b son enteros, sino que el paquete `<iostream>` está diseñado para darse cuenta solo.

Se puede usar `cin` para leer otras cosas, como cadenas, numeros flotantes, caracteres, y más.

```c++
cout << (a + b) << '\n';
```

`cout` se usa para imprimir a la consola y, al igual que `cin`, no necesita que se especifiquen los tipos y también se puede usar para imprimir cadenas, enteros, flotantes, etc. (por ejemplo acá mezclamos `(a+b)`, que es un entero y `'\n'`, que es un caracter)

## Estructuras

Al igual que en C, C++ permite definir tipos de datos a medida. A diferencia de C, no hace falta escribir `struct` cada vez que se nombra un tipo personalizado, por lo que tampoco hace falta "el truco del `typedef`".

```c++
struct punto {
    float x, y;
};

// En C tendriamos que escribir `struct punto p = ...;`
punto p = {3.0, 4.0};
```

Aparte de variables-miembro (como `x` e `y` en el ejemplo anterior), C++ nos deja definir funciones-miembro: funciones que van ligadas al tipo de dato y se llaman con una sintaxis especial.

Estas funciones tienen acceso a las variables de la estrucura pero, aparte de eso, son identicas a cualquier otra funcion.

```c++
#include <math.h>

struct punto {
    float x, y;

    float distancia_al_origen() {
        return sqrt(x*x + y*y);
    }
};

int main() {
    punto p = {3.0, 4.0};
    float d = p.distancia_al_origen(); // devuelve 5.0
}
```

La biblioteca estandar de C++ usa funciones de este estilo por todos lados.

## vector (manejo de arrays)

```c++
// documentación:
// https://en.cppreference.com/w/cpp/container/vector
vector<char> vec;  // declaro `vec` como un "vector de caracteres".
vec.push_back(x);  // agrega el elemento `x` al final de `vec`.
vec.size();        // devuelve la longitud de `vec`.
vec[i];            // devuelve el elemento `i`-esimo de `vec`.
```

------------

En C++ podemos crear arrays sin saber su longitud de antemano! Para esto usamos el tipo de datos `vector`, del paquete `<vector>`.

`vector` es un tipo de datos genérico, lo que significa que le tenemos que decir qué tipo de datos va a contener. Por ejemplo, para declarar un "array" de enteros, usamos el tipo de datos `vector<int>`. Para "arrays" de flotantes, usamos `vector<float>`. (`vector` puede guardar casi cualquier cosa: caracteres, cadenas, estructuras, etc.)

Por ejemplo, para declarar algunos arrays globales, podemos escribir asi:

```c++
#include<vector>
using namespace std;

vector<int> numeros_primos = {2, 3, 5, 7, 11, 13};

struct punto { float x, y; };
vector<punto> puntos_importantes;
```

`vector` nos permite consultar su tamano usando la funcion-miembro `size`.

Aparte, con `push_back` podemos ir agregando elementos usando a medida que necesitemos, y el arreglo cambia su tamano dinamicamente.

```c++
#include<vector>
using namespace std;
int main(){
    vector<int> v = {1, 2, 3};
    cout << v.size() << '\n'; // imprime 3
    v.push_back(42);
    cout << v.size() << '\n'; // imprime 4
}
```

## string (manejo de cadenas)

```c++
https://en.cppreference.com/w/cpp/header/string
```

------------

Parece razonable usar `vector<char>` para almacenar cadenas, pero C++ ya trae un tipo de datos especifico para este caso: `string`, del paquete `<string>`.

`string` ofrece mucha de la funcionalidad de `vector`, y algunas cosas mas. En particular, podemos leer y escribir en la consola usando `cin`/`cout`, lo cual no es posible con `vector`. Aparte, se puede iniciar usando un literal.

```c++
#include <iostream>
#include <string>
using namespace std;
int main() {
    string baldosas;
    cin >> baldosas;           // leemos un `string` por consola

    int n = baldosas.size();   // igual que con `vector`, podemos tomar el tamano de un `string`

    string letras = "AVR";     // iniciamos un `string` usando un literal

    // ...

    cout << baldosas << '\n';  // escribimos un `string` por consola
}
```

# Técnicas

Para resolver problemas se suelen aplicar ideas conocidas. Entre estas algoritmos,
estructuras de datos, y otras técnicas de programación. Hay miles de técnicas de
programación competitiva pero, en mi experiencia, las de esta sección son las más
rendidoras en OIA.

## Fuerza Bruta / Backtracking (Brute Force / Backtracking)

La técnica más confiable para sacar un par de puntos en cualquier problema es
la fuerza bruta. Esta consiste en probar todas las soluciones y quedarse con la
mejor, o la unica que es correcta. La forma más común de esto es con varios
`for` anidados.

Osea, los algoritmos de fuerza bruta suelen tener esta pinta:

```c++
for (i = 0; ...) {
  for (j = 0; ...) {
    for (k = 0; ...) {
      for (q = 0; ...) {
        if (es_solucion_valida(i, j, k, q)) {
          return solucion(i, j, k, q);
        }
      }
    }
  }
}
```

Obviamente, atacar un problema con fuerza bruta rara vez nos va a dar un puntaje
alto, principalmente por el alto tiempo de ejecución. Para optimizar esto usamos
el backtracking, una estrategia donde descartamos muchas posibilidades de un tirón.

En general, esto se implementa con varios `if`s dentro de los bucles de la fuerza
bruta.

```c++
for (i = 0; ...) {
  for (j = 0; ...) {
    if (j_es_demasiado_grande(i, j) {
      // si entramos acá, nos salteamos todos los valores de `j` que nos faltan
      // para el `i` actual, y podemos ahorrarnos muchísimas combinaciones.
      break;
    }
    for (k = 0; ...) {
      for (q = 0; ...) {
        if (es_solucion_valida(i, j, k, q)) {
          return solucion(i, j, k, q);
        }
      }
    }
  }
}
```

Si encontramos buenas formas de optimizar el backtracking, a veces podemos robar
un par de puntos más. Sin embargo, no suele ser suficiente para sacar "muchos"
puntos en un problema. Para eso existen las otras técnicas.

Ojo con ponerse a optimizar mucho un backtracking, porque no suele valer la pena.

## Algoritmos Golosos (Greedy Algorithms)

Los algoritmos golosos consisten en tomar la mejor opción en cada paso de la resolución
de un problema, sin considerar lo que puede pasar después. Esto suele ser mala idea porque,
igual que en la vida, suele convenir perjudicarse en el "corto plazo" para obtener una
mejor solución a "largo plazo".

Un ejemplo clásico de los problemas de los algoritmos golosos es encontrar la forma
de dar el vuelto con la menor cantidad de billetes/monedas posible. Si usamos las
denominaciones típicas ($1, $2, $5, $10, $20, etc), podemos encontrar la solución siempre
tomando el billete más grande que no se pase de lo que falta devolver. En cambio, si
vivieramos en un país de locos donde los billetes son de $1, $5 y $7, podemos encontrarnos
con soluciones suboptimas al seguir ese algoritmo. Por ejemplo, si queremos dar vuelto de
$10, la solución óptima es, obviamente, dar dos monedas de $5 pero el agoritmo nos lleva
a dar una moneda de $7 y tres monedas de $1.

La moraleja es que es fácil creerse que un algoritmo goloso anda siempre cuando en realidad
solo anda en casos especiales. Igual, ojo, la idea es robar puntos. Y muchos problemas
tienen subtareas que se pueden hacer con algoritmos golosos, asique tienen su lugar.

Obviamente, también hay problemas que salen con 100pts usando algoritmos golosos, pero
suelen usar ideas más complicadas.

## Programación Dinámica (DP)

Si la fuerza bruta es para sacar unos pocos puntos en cualquier problema, la
programación dinámica sirve para sacar "bastantes" puntos en "bastantes" problemas.

Generalmente se usa para problemas sobre:

- Tableros
- Arreglos
- Grafos Aciclicos

Aplica cuando el problema tiene subestructura óptima con subproblemas que se solapan.

Decimos que un problema tiene subestructura óptima cuando "Dada una solución óptima,
las partes de esa solución son óptimas para otro problema del mismo tipo"

Para darnos cuenta si un problema tiene subestructura óptima, Hay que pensar "para
atrás": nos imaginamos que el problema ya está resuelto y nos preguntamos si los prefijos
de la solución resuelven el prefijo correspondiente del problema.

## Ordenamiento

Dado un array, suele ser buena idea ordenar sus elementos para lograr algoritmos más eficientes.

## Búsqueda Binaria (Binary Search)

La busqueda binaria sirve para contestar preguntas de la pinta:

> ¿A partir de qué punto vale tal propiedad?

Por ejemplo:

> ¿Cuánto contrapeso necesita mi catapulta para alcanzar el castillo?
> 
> ¿A partir de qué posición me paso del elemento del array (ordenado) que estoy buscando?

La idea fundamental es:

1. Consideramos un intervalo `[a, b)`, donde la condición no vale en `a`, y sí vale en `b`.
2. Probamos si la propiedad vale en el punto medio entre `a` y `b`, que llamamos `m`.
3. Si la propiedad vale, pasamos a considerar el intervalo `[a, m)`.
4. Si no vale, pasamos a considerar el intervalo `[m, b)`.
5. Repetimos esto mientras que la diferencia entre `a` y `b` sea mayor a 1.

Algunas formas comunes de aplicarla son:

- Buscar elementos en un arreglo ordenado
- Ver a partir de qué valor anda un greedy
- Convertir un problema a su versión de decisión

## Algoritmos Sobre Grafos
