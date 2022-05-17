#include <iostream>

using namespace std;

int main()
{
    int i;

    /** while **/
    i = 0;
    while(i > 0){
        cout << "while: " << i << endl;
        i = i-1;
    }
    cout << "Despues del while: i = " << i << endl << endl;

    /** do-while **/
    i = 0;
    do{
        cout << "do-while: " << i << endl;
        i = i-1;
    }while(i > 0);
    cout << "Despues del do-while: i = " << i << endl;

    return 0;
}
