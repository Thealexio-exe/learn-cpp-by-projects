#include <iostream>

using namespace std;

int main() {

    // Ho usato float per permettere l'inserimento di numeri decimali.
    float lato1 = 0, lato2 = 0, lato3 = 0;

    // Inserisci 3 valori, ognuno rappresenta un lato del triangolo.
    cout << "Inserisci il lato 1: " << endl;
    cin >> lato1;

    cout << "Inserisci il lato 2: " << endl;
    cin >> lato2;

    cout << "Inserisci il lato 3: " << endl;
    cin >> lato3;

    /*
    Fai attenzione alla logica.
    La prima condizione controlla: "Se tutti i lati sono uguali, allora il triangolo è equilatero."
    Se vuoi, puoi anche semplificare questo if.
    */
    if (lato1 == lato2 && lato2 == lato3 && lato3 == lato1) {
        cout << "equilatero" << endl;
    }

    /* != significa "diverso da", quindi qui la logica è:
    se tutti i lati sono diversi, il triangolo è scaleno. */
    else if (lato1 != lato2 && lato3 != lato2 && lato3 != lato1) {
        cout << "scaleno" << endl;
    }

    // Altrimenti, due lati devono essere uguali → isoscele.
    else {
        cout << "isoscele" << endl;
    }
}