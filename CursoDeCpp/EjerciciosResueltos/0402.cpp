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

    if(a%b == 0){
        cout << "a es multiplo de b" << endl;
    }else{
        cout << "a no es multiplo de b" << endl;
    }


    return 0;
}
