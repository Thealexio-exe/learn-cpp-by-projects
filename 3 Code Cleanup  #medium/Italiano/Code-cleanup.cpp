#include <iostream> 
// ho lasciato questa volta l'intera spiegazione nel README.md

using namespace std;

// funzione di tipo int che fa la somma di due numero e restituisce la funzione somma
int Somma(int num1, int num2) {
    int somma = num1 + num2;

    cout << "somma calcolata \n";

    return somma;
}

int main() {
    int numero_1 = 0, numero_2 = 0, somma = 0;

    // input per l'utente
    cout << "inserisci il primo numero: ";
    cin >> numero_1;

    cout << "inserisci il secondo numero: ";
    cin >> numero_2;

    // output programma
    somma = Somma(numero_1, numero_2);
    cout << "il risultato è: " << somma << endl;

    // controllo della varianile so,,a
    if (somma <= 10) {
        cout << "somma maggiore di 10 \n";
    } else  {
        cout << "somma minore di dieci \n";
    }

    return 0;
}