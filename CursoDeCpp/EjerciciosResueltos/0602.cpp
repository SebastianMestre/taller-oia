#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;
    while(m <= 2 || n <= 2 || m >= 80 || n >= 80){
        cout << "m y n deben ser mayores a 2 y menores a 80. Por favor, vuelva a ingresarlos." << endl;
        cin >> m >> n;
    }
    cout << endl;


    int i,j;

    // Primera fila:        +---------+
    cout << "+";
    for(j=1;j<n-1;j++){
        cout << "-";
    }
    cout << "+" << endl;

    // Filas del medio:     |         |
    for(i=1;i<m-1;i++){
        cout << "|";
        for(j=1;j<n-1;j++){
            cout << " ";
        }
        cout << "|" << endl;
    }

    // Ultima fila:         +---------+
    cout << "+";
    for(j=1;j<n-1;j++){
        cout << "-";
    }
    cout << "+" << endl;


    return 0;
}
