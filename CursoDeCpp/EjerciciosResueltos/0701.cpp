#include <iostream>

using namespace std;

/* Aunque este ejercicio se pueda resolver mas eficientemente
   sin arrays, se los emplea para mostrar su uso.
*/

int main()
{
    int i;
    int numeros[10], n;

    do{
        cin >> n;
    }while(n <= 0 || n > 10);

    for(i=0;i<n;i++){
        cin >> numeros[i];
    }

    int maximo, minimo;
    maximo = minimo = numeros[0];
    float suma = numeros[0];
    for(i=1;i<n;i++){ // i arranca en 1 !!
        suma += numeros[i];

        if(maximo < numeros[i])
            maximo = numeros[i];

        if(minimo > numeros[i])
            minimo = numeros[i];
    }

    cout << "Maximo: " << maximo << endl;
    cout << "Minimo: " << minimo << endl;
    cout << "Promedio: " << suma/n << endl;

    return 0;
}
