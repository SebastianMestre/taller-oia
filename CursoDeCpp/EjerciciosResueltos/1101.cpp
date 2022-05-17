#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    freopen("1101.in","r",stdin);
    freopen("1101.out","w",stdout);

    int n = 10;

    int i;
    char nombre[n][100], apellido[n][100];

    for(i=0;i<n;i++)
        cin >> nombre[i] >> apellido[i];

    for(i=0;i<n;i++)
        cout << apellido[i] << ", " << nombre[i] << endl;

    return 0;
}
