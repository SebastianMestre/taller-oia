#include <iostream>

using namespace std;

int suma(int,int);

int main()
{
    cout << suma(1,2) << endl;

    return 0;
}

int noHagoNada(int a){
    return a;
}

int suma(int a, int b){
	int r;
	r = noHagoNada(a) + b;
	return r;
}
