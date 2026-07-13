// Questo è un commento.
// Tutto ciò che si trova dopo // viene ignorato dal programma.

/*
Questa è una libreria che permette di utilizzare comandi come cin, cout, ecc.
*/
#include <iostream>

/*
Quando utilizzi comandi come cout, normalmente devi scrivere std::cout.
Questa riga permette di evitare di scrivere "std::" ogni volta.

Nota: per imparare va bene, ma nei progetti più grandi è meglio evitarlo
per prevenire conflitti tra nomi.
*/
using namespace std;

// Il codice dentro main() viene eseguito dall'alto verso il basso.
int main() {

    // Una variabile è un contenitore per dei dati che possono cambiare nel tempo.
    // Prima si scrive il tipo (int = numeri interi),
    // poi il nome della variabile e infine il suo valore.
    // È possibile modificare il suo valore anche successivamente.
    int var = 0;
    var = 5;

    // Questo stampa del testo sullo schermo.
    // Output: result: 5
    cout << "result: " << var << endl;

    // Questo termina il programma.
    // Puoi pensarlo come la "chiusura" del programma.
    return 0;
}