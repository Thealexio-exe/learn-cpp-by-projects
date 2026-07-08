#include <iostream>

using namespace std;

int Somma(int num1, int num2) {
    int somma = num1 + num2;

    cout << "somma calcolata \n";

    return somma;
}

int main() {

    int numero_1 = 0, numero_2 = 0, somma = 0;

    cout << "inserisci il primo numero: ";
    cin >> numero_1;


    cout << "inserisci il secondo numero: ";
    cin >> numero_2;

    somma = Somma(numero_1, numero_2);
}