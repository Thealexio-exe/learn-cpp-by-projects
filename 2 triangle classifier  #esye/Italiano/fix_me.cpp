#include <iostream>

using namespace std;

int main() {

    float lato1 = 0, lato2 = 0, lato3 = 0;

    cout << "Inserisci il lato 1: \n";
    cin >> lato1;

    cout << "Inserisci il lato 2: \n";
    cin >> lato2;

    cout << "Inserisci il lato 3: \n";
    cin >> lato3;

    /*
    L'errore si trova qui.

    È un errore di logica e lo considererei di difficoltà media.

    Ti consiglio di procedere così:
    - Esegui il programma.
    - Prova diversi valori.
    - Cerca di capire cosa non funziona.
    - Trova la soluzione migliore.

    Ci sono due possibili modi per risolverlo.
    */
    if (lato1 == lato2 && lato2 == lato3 && lato3 == lato1) {
        cout << "equilatero\n";
    } else if (lato1 == lato2 && lato3 == lato2 && lato3 != lato1) {
        cout << "isoscele\n";
    } else {
        cout << "scaleno\n";
    }
}