#include <iostream>

using namespace std;

int main()
{
    int n = 10;

    int i;
    char nombre[n][100], apellido[n][100];

    for(i=0;i<n;i++)
        cin >> nombre[i] >> apellido[i];

    cout << endl;
    for(i=0;i<n;i++)
        cout << apellido[i] << ", " << nombre[i] << endl;


    return 0;
}
