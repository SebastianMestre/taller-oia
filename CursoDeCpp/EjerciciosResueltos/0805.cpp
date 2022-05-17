#include <iostream>
#include <cstring>

using namespace std;

bool frase_palindromo(char frase[]){
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


    int cant_letras = strlen(palabra);

    int i, pos_simetrica;
    char letra, letra_simetrica;
    for(i=0 ; i<cant_letras/2; i++){
        pos_simetrica = cant_letras-1 - i;

        letra = palabra[i];
        letra_simetrica = palabra[pos_simetrica];

        if(toupper(letra) != toupper(letra_simetrica)){ // Las comparamos en mayuscula, para que palabras como Ana o Neuquen sean palindromos.
            return false;
        }
    }

    return true;
}


int main()
{
    char frase[100];
    cin.getline(frase,100);

    cout << (frase_palindromo(frase) ? "Es" : "No es") << " palindromo." << endl;

    return 0;
}
