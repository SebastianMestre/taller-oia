#include <iostream>
#include <cstring>

using namespace std;

bool es_par(int n){
    if(n%2 == 0){
        return true;
    }else{
        return false;
    }
}

/* Tambien se puede escribir de forma mas corta:

bool es_par(int n){
    return (n%2 == 0);
}

*/


int main()
{
    int n;
    cin >> n;
    cout << (es_par(n) ? "Si" : "No") << endl;

    return 0;
}
