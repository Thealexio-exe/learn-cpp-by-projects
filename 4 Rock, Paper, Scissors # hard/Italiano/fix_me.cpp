#include <iostream> 
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream> 

/*
In questo fix_me è una semplificazione di game1 e game2, ci sono un po di problemi, li ho elecati qui sotto:

- 2 bug sintassi/logica
- 1 errore di logica nel while
- 2 errori nelle funzioni di carica dati (1 di sintassi e uno più estetico)
- 3 errori nelle varibili (consiglio studia bene il concetto di variabile globale)
- 1 errore nascosto

se sei su visual studio code ti consiglio di disattivare gli errori cosi rendi il tutto più difficile
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
    int random = rand()%3;

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