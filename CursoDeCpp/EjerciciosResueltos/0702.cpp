#include <iostream>

using namespace std;

/* Este ejercicio tiene muchas soluciones. */

int main()
{
    int i;
    int numeros[10];

    for(i=0;i<10;i++)
        cin >> numeros[9-i];

    for(i=0;i<9;i++)
        cout << numeros[i] << " ";
    cout << numeros[i] << endl;

    return 0;
}
