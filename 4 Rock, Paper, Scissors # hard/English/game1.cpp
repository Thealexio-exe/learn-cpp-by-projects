#include <iostream> 
#include <string> //libreria per aggiunegere le variabili con testo
#include <cstdlib> // per generare numeri randomici ci vogliono le seguenti due libreriea
#include <ctime>

using namespace std;

// variabile globale
int vittorie = 0;

// se non sai usare le funzioni gurdati un video youtube perchè questo programma ha solo funzioni 

/*
In questa funzione fa le seguenti cose:

- rand serve per generare nuemeri randomici 
- srand a rigenrarli se no il numero randomico non cambierebbe
- il risulato del numero randomico determina risultato della funzione
- con un return la funzione ha fatto la sua scelta

*/
string Scelta_pc() {
    srand(time(NULL));
    int random = rand()%4;

    if (random == 0 ) return "sasso";
    else if (random == 1 ) return "carta";
    else return "forbici";
}

/*
Qui invece determina velocemente la logica di sasso carta forbici, è molto logico
*/
string logica(string utente, string PC) {
    if (utente == PC)  {
        return "pareggio";
    }
    else if ((utente == "sasso" && PC == "forbici") ||
             (utente == "carta" && PC == "sasso") ||
             (utente == "forbici" && PC == "carta") ) {
        return "Hai vinto";
    }else {
        return "Hai perso";   
    }
}

int main() {

    cout << "gioca a sasso carta forbici, credo che sia inutile che ti spiegi come funziona." << endl;

    // un while true per rendere il programma giocabile all'infinito
    while (true) {
        string User = "";

        while (true) {
            cout << "fai la tua scelta" << endl;
            cin >> User;

            if (User == "sasso" || User == "carta" || User == "forbici") {
                break;
            }else if (User == "stop") {
                return 0;
            }else {
                cout << "scrivi in maniera corretta" << endl;
            }
        }

        /*
        qui usiamo le funzioni create in precedenza:

        - la prima da il valore scelto casualmente alla variabile pc
        - la seconda prende le due variabili e sceglie chi ha vinto

        */
        string pc = Scelta_pc();
        cout << "il pc ha scelto: "<< pc << endl;

        cout << logica(User, pc) << endl;

    }
}
