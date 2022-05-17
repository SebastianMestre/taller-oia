#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    freopen("1103.txt","r",stdin);

    int n = 10000;
    float p = 0.0;
    int numero;
    for(int i=0;i<n;i++){
        cin >> numero;
        p += (float)numero/n;
    }
    cout << p << endl;

    return 0;
}
