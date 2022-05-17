#include <iostream>

using namespace std;

int maximo(int a, int b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}

int maximo(int a, int b, int c){
    return maximo(a,maximo(b,c));
}


int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    cout << maximo(a,b,c);

    return 0;
}
