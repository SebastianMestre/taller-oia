#include <iostream>

using namespace std;

/* Por supuesto que hay mejores formas de ver si un numero es primo.
   Presentamos esta porque nos parece que es la mas adecuada para los
   conocimientos del lector en este momento.
*/

int main()
{
    int n;
    int d;
    int cant_div = 0;

    cin >> n;
    if(n < 0){
        n = -n; // Lo transformamos a positivo.
    }

    for(d=1;d<=n;d++){
        if(n%d == 0){   // d es divisor de n
            cant_div++;
        }
    }

    if(cant_div == 2){
        cout << "es primo! :D" << endl;
    }else{
        cout << "no es primo :(" << endl;
    }

    return 0;
}
