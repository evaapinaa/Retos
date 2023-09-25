/*
 * Escribe un programa que reciba un texto y transforme lenguaje natural a
 * "lenguaje hacker" (conocido realmente como "leet" o "1337"). Este lenguaje
 *  se caracteriza por sustituir caracteres alfanuméricos.
 * - Utiliza esta tabla (https://www.gamehouse.com/blog/leet-speak-cheat-sheet/) 
 *   con el alfabeto y los números en "leet".
 *   (Usa la primera opción de cada transformación. Por ejemplo "4" para la "a")
 */

#include <iostream>
#include <string>

using namespace std;

const int N = 26;
typedef string abecedario[N]; 

int main() {

    // Inicializamos el abecedario del lenguaje natural y el del lenguaje hacker

     char A[] = {'A','B','C','D','E','F',
                 'G','H','I','J','K','L',
                 'M','N','O','P','Q','R',
                 'S','T','U','V','W','X',
                 'Y','Z'};

    abecedario leet = {"4", "I3", "[", ")", "3", "|=", "&",
                        "#", "1", ",_|", ">|", "1", "/\\/\\",
                        "^/", "0", "|*", "(_,)", "I2", "5",
                        "7", "(_)", "\\/", "\\/\\//", "><",
                        "j", "2"};

    string texto;   // texto a escribir

    cout << "Ingrese el texto en lenguaje natural: ";
    getline(cin,texto);

    cout << "Texto en lenguaje hacker: ";

    for(size_t i=0;i<texto.length();i++) {
        char letra = toupper(texto[i]);   // ponemos todas las letras en mayuscula para evitar errores
        bool encontrado = false;
        for(int j=0;j<N;j++) {
            if(letra == A[j]) {
                cout << leet[j];
                encontrado = true;
            }
        }
        if(!encontrado) {
                cout << letra; // para poder imprimir los espacios o cualquier símbolo diferente, como ¿?,¡!,:, etc...
            }
    }

    return 0;
}
