#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char palabra[100];
    cin >> palabra;

    int cant_letras = strlen(palabra);
    bool es_palindromo = true;

    int i, pos_simetrica;
    char letra, letra_simetrica;
    for(i=0 ; i<cant_letras/2 && es_palindromo; i++){
        pos_simetrica = cant_letras-1 - i;

        letra = palabra[i];
        letra_simetrica = palabra[pos_simetrica];

        if(toupper(letra) != toupper(letra_simetrica)){ // Las comparamos en mayuscula, para que palabras como Ana o Neuquen sean palindromos.
            es_palindromo = false;
        }
    }

    cout << (es_palindromo ? "Es" : "No es") << " palindromo." << endl;

    return 0;
}
