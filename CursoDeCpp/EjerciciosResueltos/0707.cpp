#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char frase[100];
    cin.getline(frase,100);

    // Vamos a "limpiar" la frase, es decir, la vamos a transformar en una cadena que solo tenga letras.
    char palabra[100];
    int iterador_frase, iterador_palabra;
    iterador_palabra = 0;
    for(iterador_frase=0 ; frase[iterador_frase]!='\0' ; iterador_frase++){
        if( ('A'<=frase[iterador_frase] && frase[iterador_frase]<='Z') || ('a'<=frase[iterador_frase] && frase[iterador_frase]<='z') ){
            palabra[iterador_palabra] = frase[iterador_frase];
            iterador_palabra++;
        }
    }
    palabra[iterador_palabra] = '\0';


    // Y ahora es igual al ejercicio anterior:
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
