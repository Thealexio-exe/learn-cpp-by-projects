#include <iostream>

using namespace std;

int main() {

    int size = 0;

    cout << "Inserisci la dimensione: ";
    cin >> size;
    cout << endl;

    /*
    Questa parte è esattamente uguale all'esercizio precedente,
    ma questa volta c'è un piccolo errore di logica.

    Prova a trovarlo semplicemente leggendo il codice prima di eseguirlo.
    */

    for (int i = 1; i <= size; i++) {

        for (int j = 0; j < size - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    /*
    Il tuo obiettivo è completare il codice qui sotto.
    Dovrà stampare lo stesso triangolo di prima, ma capovolto, così da creare un rombo.

    Ragiona sulla logica:

    - Quale valore deve aumentare a ogni riga?
    - Quale valore deve diminuire?
    - Riesci a riutilizzare le formule del primo triangolo?
    */

    for (int i = 0; i <= size; i++) {

        for (int c = 0; /* Completa questa condizione */; c++) {
            cout << " ";
        }

        for (int c = 0; /* Completa questa condizione */; c++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}