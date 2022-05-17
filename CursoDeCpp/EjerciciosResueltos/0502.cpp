#include <iostream>

using namespace std;

int main()
{
    int dif = 'a' - 'A';

    char minus, mayus;
    cout << "Ingrese una letra minuscula: ";
    cin >> minus;
    mayus = minus - dif;
    cout << mayus << endl;

    return 0;
}
