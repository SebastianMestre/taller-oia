#include <iostream>

using namespace std;

int suma(int a, int b){
	int r;
	r = a + b;
    cout << "dentro de suma, r = " << r << endl;
	return r;
}

int main()
{
    int r = 0;

    cout << "fuera de suma, r = " << r << endl;
    suma(1,2);
    cout << "fuera de suma, r = " << r << endl;

    return 0;
}
