#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    freopen("entrada.in","r",stdin);  // Con esta linea cin va a leer desde "entrada.in" en lugar del teclado
    freopen("salida.out","w",stdout); // y con esta cout va a imprimir al archivo "salida.out" en lugar de la pantalla

    int a,b,c;
    cin >> a >> b >> c;
    cout << a+b+c << endl;

    return 0;
}
