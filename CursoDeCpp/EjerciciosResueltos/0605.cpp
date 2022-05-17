#include <iostream>

using namespace std;

int main()
{
    int n;
    int d;

    cin >> n;

    if(n <= 0){
        cout << "Error: se debe ingresar un numero positivo" << endl;
    }else{
        cout << endl << "Los divisores de " << n << " son:" << endl;

        for(d=1;d<=n;d++){
            if(n%d == 0){   // d es divisor de n
                cout << d << endl;
            }
        }
    }

    return 0;
}
