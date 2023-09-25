/*
 * Escribe un programa que muestre por consola (con un print) los
 * números de 1 a 100 (ambos incluidos y con un salto de línea entre
 * cada impresión), sustituyendo los siguientes:
 * - Múltiplos de 3 por la palabra "fizz".
 * - Múltiplos de 5 por la palabra "buzz".
 * - Múltiplos de 3 y de 5 a la vez por la palabra "fizzbuzz".
 */

#include <iostream>

using namespace std;

const int N = 100;  // Constante 100

void FizzBuzz(int x) {
    
    if((x % 5 == 0) && (x % 3 == 0)) {
        cout << "fizzbuzz";
    } 

    else if(x % 3 == 0) {
        cout << "fizz";
    }

    else if(x % 5 == 0) {
        cout << "buzz";
    }

}

int main() {

    for(int i=1;i<=N;i++) {
        cout << i << ": "; 
        FizzBuzz(i);
        cout << endl;
    }
    
    return 0;
}