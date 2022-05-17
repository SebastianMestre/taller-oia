#include <iostream>

using namespace std;

int g; // Variable global

int sumarG(int n){
    return n+g;
}

void cambiarG(int v){
    g = v;
}


int main()
{
    cout << sumarG(10) << endl;

    g = 5;
    cout << sumarG(10) << endl;

    cambiarG(2);
    cout << sumarG(10) << endl;

    return 0;
}
