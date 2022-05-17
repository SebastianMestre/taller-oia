#include <iostream>

using namespace std;

int main()
{
    float x;
    float suma = 0.0;

    for(int i=0;i<10;i++){
        cin >> x;
        suma += x;
    }

    cout << "Promedio = " << suma/10.0 << endl;

    return 0;
}
