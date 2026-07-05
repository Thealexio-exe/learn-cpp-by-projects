#include <iostream> 
#include <string> // Libreria per aggiungere variabili di testo.
#include <cstdlib> // Per generare numeri casuali servono le seguenti due librerie.
#include <ctime>

using namespace std;

// Se non sai usare le funzioni, guardati un video su YouTube, perché questo programma usa solo funzioni.

/*
In questa funzione vengono fatte le seguenti cose:

- rand serve per generare numeri casuali.
- srand serve a rigenerarli, altrimenti il numero casuale non cambierebbe.
- Il risultato del numero casuale determina il risultato della funzione.
- Con un return la funzione restituisce la sua scelta.

*/
string Scelta_pc() {
    srand(time(NULL));
    int random = rand()%4;

    if (random == 0 ) return "sasso";
    else if (random == 1 ) return "carta";
    else return "forbici";
}

/*
Qui invece viene gestita la logica di sasso, carta, forbici.
È molto semplice da capire se sai suare bene gli if.
*/
string logica(string utente, string PC) {
    if (utente == PC)  {
        return "pareggio";
    }
    else if ((utente == "sasso" && PC == "forbici") ||
             (utente == "carta" && PC == "sasso") ||
             (utente == "forbici" && PC == "carta") ) {
        return "Hai vinto";
    } else {
        return "Hai perso";   
    }
}

int main() {

    cout << "Gioca a sasso, carta, forbici" << endl;

    // Un while(true) per rendere il programma giocabile all'infinito.
    while (true) {
        string User = "";

        while (true) {
            cout << "Fai la tua scelta:" << endl;
            cin >> User;

            if (User == "sasso" || User == "carta" || User == "forbici") {
                break;

            } else if (User == "stop") {
                return 0;
                
            } else {
                cout << "Scrivi una scelta corretta." << endl;
            }
        }

        /*
        Qui usiamo le funzioni create in precedenza:

        - La prima assegna alla variabile pc una scelta casuale.
        - La seconda prende le due variabili e decide chi ha vinto.

        */
        string pc = Scelta_pc();
        cout << "Il PC ha scelto: " << pc << endl;

        cout << logica(User, pc) << endl;

    }
}