```cpp
#include <iostream>

using namespace std;

int main() {

    int size = 0;

    cout << "Inserisci la dimensione: ";
    cin >> size;

    // Il programma ripete questo ciclo "size" volte.
    for (int i = 1; i <= size; i++) {

        /* Per creare il triangolo utilizziamo due cicli for annidati:
        - il primo stampa gli spazi
        - il secondo stampa gli asterischi */

        /* La logica è semplice:
        Si parte con il numero massimo di spazi, poi se ne rimuove uno
        a ogni iterazione.

        Esempio (size = 5):

        i = 1 -> 4 spazi
        i = 2 -> 3 spazi
        i = 3 -> 2 spazi, ecc... */
        for (int j = 0; j < size - i; j++) {
            cout << " ";
        }

        /* Questo ciclo stampa gli asterischi.

        La formula è:
            2 * i - 1
        Perché?

        i = 1 -> 1 asterisco
        i = 2 -> 3 asterischi
        i = 3 -> 5 asterischi

        A ogni riga vengono aggiunti due asterischi, creando un triangolo simmetrico.

        Senza il "-1", le righe conterrebbero:
        2, 4, 6, ...

        e la figura non sarebbe più centrata correttamente. */

        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
```
