#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Ingrese dos numeros enteros:" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    cout << endl;

    cout << "a+b = " << a+b << endl;
    cout << "a-b = " << a-b << endl;
    cout << "a*b = " << a*b << endl;
    cout << "a/b = " << a/b << endl;

    return 0;
}

// Si se ingresa b=0, al hacer a/b el programa nos va a dar error.
