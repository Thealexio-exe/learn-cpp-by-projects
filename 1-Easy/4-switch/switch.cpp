#include <iostream>

using namespace std;

// In questo programma introduco l'utilizzo dello switch, un costrutto simile all'if/else.
// Guarda il README: ho messo la maggior parte delle spiegazioni lì.
// Nei commenti di questo file spiego principalmente la sintassi.

int main() {
    int day;


    // Iniziamo dando un valore a una variabile di tipo int
    cout << "Enter a number from 1 to 7: ";
    cin >> day;

    // Lo switch funziona in modo simile a un if, ma controlla il valore di una sola variabile
    switch (day) { 
        case 1:    // Al posto dell'if usiamo case, seguito dal valore che vogliamo controllare
            cout << "Monday" << endl;
            break; // Questo comando verrà spiegato meglio tra poco, ma per ora basta ricordare questo concetto:
                   // se "day = 1", allora "case 1" è verificato e viene eseguito il codice al suo interno.
                   // Senza il break, il programma continuerebbe a eseguire anche i case successivi.
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default: // default funziona in modo simile a else: se nessun case corrisponde, viene eseguito questo codice
            cout << "Error" << endl; 
            break;
    }

    return 0;
}