/*
 * Escribe un programa que, dado un número, compruebe y muestre si es primo, fibonacci y par.
 * Ejemplos:
 * - Con el número 2, nos dirá: "2 es primo, fibonacci y es par"
 * - Con el número 7, nos dirá: "7 es primo, no es fibonacci y es impar"
 */

#include <iostream>

using namespace std;


bool esPrimo(int n) {
  
  if (n == 0 || n == 1 || n == 4) return false;
  for (int x = 2; x < n / 2; x++) {
    if (n % x == 0) return false;
  }
  
  return true;
}

bool esFibonacci(int n) {
    if (n < 2) {
        return true;
    }

    int penult = 1;
    int ult = 1;
    int fibo = 2;

    while (fibo <= n) {
        if (fibo == n) {
            return true;
        }
        penult = ult;
        ult = fibo;
        fibo = ult + penult;
    }

    return false;
}

bool esPar(int n) {

    if(n % 2 == 0) {
        return true;
    }

    return false;
}

int main(){

    int Num;

    cout << "Introduce un numero: ";
    cin >> Num;

    cout << "El numero " << Num << ": ";

    if(esPrimo(Num)) {
        cout << "Es primo, ";
    }
    else {
        cout << "No es primo, ";
    }

    if(esFibonacci(Num)) {
        cout << "fibonacci, ";
    }
    else {
        cout << "no es fibonacci, ";
    }

    if(esPar(Num)) {
        cout << "y par." << endl;
    }
    else {
        cout << "y es impar." << endl;
    }

    return 0;
}