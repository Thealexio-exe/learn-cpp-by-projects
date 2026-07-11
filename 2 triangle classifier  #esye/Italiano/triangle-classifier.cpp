#include <iostream>

using namespace std;

int main() {

    // Ho usato float per permettere l'inserimento di numeri decimali.
    float lato1 = 0, lato2 = 0, lato3 = 0;

    // Inserisci 3 valori, ognuno rappresenta un lato del triangolo.
    cout << "Inserisci il lato 1: \n";
    cin >> lato1;

    cout << "Inserisci il lato 2: \n";
    cin >> lato2;

    cout << "Inserisci il lato 3: \n";
    cin >> lato3;

    /*
    Fai attenzione alla logica.
    La prima condizione controlla: "Se tutti i lati sono uguali, allora il triangolo è equilatero."
    Se vuoi, puoi anche semplificare questo if.
    */
    if (lato1 == lato2 && lato2 == lato3 && lato3 == lato1) {
        cout << "equilatero\n";
    }

    /* != significa "diverso da", quindi qui la logica è:
    se tutti i lati sono diversi, il triangolo è scaleno. */
    else if (lato1 != lato2 && lato3 != lato2 && lato3 != lato1) {
        cout << "scaleno\n";
    }

    // Altrimenti, due lati devono essere uguali → isoscele.
    else {
        cout << "isoscele\n";
    }
}