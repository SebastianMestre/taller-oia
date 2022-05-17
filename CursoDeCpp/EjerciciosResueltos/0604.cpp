#include <iostream>

using namespace std;

int main()
{
    float b;
    int e;
    float resultado = 1.0;

    cin >> b >> e;

    if(e >= 0){ // Cuando e >= 0, b^e = b*b*...*b
        for(int i=0 ; i<e ; i++){
            resultado *= b;
        }
    }else{      // Cuando e < 0, b^e = 1/(b*b*...*b)
        for(int i=e ; i<0 ; i++){
            resultado /= b;
        }
    }

    cout << resultado << endl;

    return 0;
}
