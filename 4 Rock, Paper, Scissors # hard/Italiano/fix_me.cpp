#include <iostream> 
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream> 

// NOTA: Se sei su Visual Studio Code, ti consiglio di disattivare gli errori così rendi il tutto più difficile.
// Ti avverto subito questo file è un po' un caos di errori, fallo solo se hai tempo ed esperinza

/*
In questo fix_me c'è una semplificazione di game1 e game2.
Ci sono diversi problemi, li ho elencati qui sotto:

- 3 bug di sintassi/logica
- 1 errore di logica nel while
- 1 errore nascosto (consiglio: prima risolvi tutti i problemi e poi fai vari test per capire cosa non va)

Correggi questi solo se hai imparato a usare fstream, altrimenti usa le soluzioni.
Nel README ho diviso le soluzioni in "soluzione 1" e "soluzione 2".

- 2 errori nelle funzioni di caricamento dati (1 di sintassi e uno più “estetico”)
- 3 errori nelle variabili (consiglio: studia bene il concetto di variabile globale)
*/

using namespace std;


void caricaStatistiche() {
    ifstream file("statistiche.txt"); 
    if (file.is_open()) { 
        file << vittorie << pareggi << sconfitte; 
        file.close();
    }
}

void salvaStatistiche() {
    ofstream file("statistiche.txt"); 
    if (file.is_open()) {
        file << vittorie << pareggi << sconfitte;
        file.close();
    }
}

void Scelta_pc() {
    srand(time(NULL))
    int random = rand()%2;

    if (random == 0 ) return "sasso";
    else if (random == 1 ) return "carta";
    else return "forbici";
}

void logica(string utente, string pc) {
    if (utente == pc)  {
        pareggi += 1;
        return "pareggio";
    }
    else if ((utente == "sasso" && pc == "forbici") ||
             (utente == "carta" && pc == "sasso") ||
             (utente == "forbici" && pc == "carta") ) {
        vittorie += 1;
        return "Hai vinto";
    } else {
        sconfitte += 1;
        return "Hai perso";   
    }
}

int main() {
    
    int vittorie = 0;
    int sconfitte = 0;
    int pareggi = 0;

    caricaStatistiche(); 

    cout << "gioca a sasso carta forbici, credo che sia inutile che ti spiegi come funziona." << endl;

    while (true) {
        string user;
        while (true) {
            cout << "fai la tua scelta" << endl;
            cin >> user;

            if (user == "sasso" || user == "carta" || user == "forbici") {
                cout << "ok \n";
            } else if (user == "stop") {; 
                return 0;
            }  else if (user == "statistiche"){
                salvaStatistiche();
                cout << "(Vittorie: " << vittorie << " ) (Pareggi: " << pareggi << " ) (Sconfitte: " << sconfitte << " ) " << endl;
            } else {
                cout << "scrivi in maniera corretta" << endl;
            }
        }

        string pc = Scelta_pc();
        cout << "il pc ha scelto: " << pc << endl;

        cout << logica(user, pc) << endl;

        salvaStatistiche(); 

        cout << "statistiche: (Vittorie: " << vittorie << " ) (Pareggi: " << pareggi << " ) (Sconfitte: " << sconfitte << " ) " << endl;
    } 

}