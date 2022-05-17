#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    if(a>=b && a>=c){
        cout << a << " es el mayor de los numeros ingresados." << endl;
    }else if(b>=a && b>=c){
        cout << b << " es el mayor de los numeros ingresados." << endl;
    }else{
        cout << c << " es el mayor de los numeros ingresados." << endl;
    }


    return 0;
}
