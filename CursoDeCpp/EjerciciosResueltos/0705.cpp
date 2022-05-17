#include <iostream>

using namespace std;

int main()
{
    int i;
    char frase[100];
    int cant_caracteres = 0;

    cin.getline(frase,100);

    for(i=0 ; frase[i]!='\0' ; i++){
        cant_caracteres++;
    }

    cout << "La frase tiene " << cant_caracteres << " caracteres." << endl;


    return 0;
}


/** Otra solucion **/
/*
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char frase[100];
    cin.getline(frase,100);
    cout << "La frase tiene " << strlen(frase) << " caracteres." << endl;

    return 0;
}
*/
