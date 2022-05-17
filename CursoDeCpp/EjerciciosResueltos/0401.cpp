#include <iostream>

using namespace std;

int main()
{
    int a, b, op;

    cout << "Ingrese dos numeros enteros:" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    cout << endl;

    cout << "Que operacion desea hacer?" << endl;
    cout << "1: suma" << endl;
    cout << "2: resta" << endl;
    cout << "3: producto" << endl;
    cout << "4: cociente" << endl;
    cin >> op;

    if(op == 1){
        // SUMA
        cout << "a+b = " << a+b << endl;
    }else if(op == 2){
        // RESTA
        cout << "a-b = " << a-b << endl;
    }else if(op == 3){
        // PRODUCTO
        cout << "a*b = " << a*b << endl;
    }else if(op == 4){
        // COCIENTE
        if(b == 0){
            cout << "No se puede dividir por 0." << endl;
        }else{
            cout << "a/b = " << a/b << endl;
        }
    }


    return 0;
}
