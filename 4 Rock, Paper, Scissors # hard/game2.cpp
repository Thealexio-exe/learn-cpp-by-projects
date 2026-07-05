#include <iostream> 
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

// variabili globali
int vittorie = 0;
int sconfitte = 0;
int pareggi = 0;


// in questa fuznione  il programma va a cercare il file statistiche.txt, dove al suo interno ci sarammo scritte le tre variabili 
void caricaStatistiche() {
    ifstream file("statistiche.txt"); // ifstream crea e legge
    if (file.is_open()) {
        file >> vittorie >> pareggi >> sconfitte; 
        file.close();
    }
}

/*
ogni volta che si fa un raund si utilizza una funzione che aggiorna il file scrivedo, 
semplicemte guarda quanto valgono le tre variabili globari 
*/ 
void salvaStatistiche() {
    ofstream file("statistiche.txt"); // ofstream legge e scrive
    if (file.is_open()) {
        file << vittorie << " " << pareggi << " " << sconfitte;
        file.close();
    }
}

string Scelta_pc() {
    srand(time(NULL));
    int random = rand()%4;

    if (random == 0 ) return "sasso";
    else if (random == 1 ) return "carta";
    else return "forbici";
}

string logica(string utente, string pc) {
    if (utente == pc)  {
        pareggi += 1;
        return "pareggio";
    }
    else if ((utente == "sasso" && pc == "forbici") ||
             (utente == "carta" && pc == "sasso") ||
             (utente == "forbici" && pc == "carta") ) {
        vittorie += 1;
        return "Hai vinto";
    }
    else if (utente == "pistola") {
        vittorie -= 1;
        return "bro veramente, ti tolgo una vittoria per questo";   
    } 
    else {
        sconfitte += 1;
        return "Hai perso";   
    }
}

int main() {
    caricaStatistiche();

    cout << "gioca a sasso carta forbici, credo che sia inutile che ti spiegi come funziona." << endl;

    while (true) {
        string user;
        while (true) {
            cout << "fai la tua scelta" << endl;
            cin >> user;

            if (user == "sasso" || user == "carta" || user == "forbici" || user == "pistola") {
                break;
            } else if (user == "stop") {
                salvaStatistiche();
                return 0;
            } else if (user == "reset") {
                vittorie = 0;
                pareggi = 0;
                sconfitte = 0;
                salvaStatistiche();
                cout << "statistiche azzerate: (Vittorie: " << vittorie << " ) (Pareggi: " << pareggi << " ) (Sconfitte: " << sconfitte << " ) " << endl;
            } else if (user == "statistiche"){
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