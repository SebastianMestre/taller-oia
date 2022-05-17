#include <iostream>

using namespace std;

int main()
{
    int dif = 'a' - 'A';

    char c;
    cin >> c;

    if('A' <= c && c <= 'Z'){
        // c es una letra mayuscula
        cout << (char)(c + dif) << endl;
    }else{
        if('a' <= c && c <= 'z'){
            // c es una letra minuscula
            cout << (char)(c - dif) << endl;
        }else{
            // c no es una letra
            cout << c << endl;
        }
    }

    return 0;
}
