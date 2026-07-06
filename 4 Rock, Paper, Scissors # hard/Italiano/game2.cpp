#include <iostream> 
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream> // Aggiungiamo questa libreria per usare file esterni, per ora usaremo solo txt

using namespace std;

// Variabili globali
int vittorie = 0;
int sconfitte = 0;
int pareggi = 0;


// In questa funzione il programma va a cercare il file statistiche.txt,
// dove al suo interno sono salvate le tre variabili.
void caricaStatistiche() {
    ifstream file("statistiche.txt"); // ifstream legge e apre il file
    if (file.is_open()) { // se il file esiste, legge le variabili
        file >> vittorie >> pareggi >> sconfitte; 
        file.close();
    }
}

/*
Ogni volta che si fa un round si utilizza questa funzione per aggiornare il file.

Semplicemente salva i valori delle tre variabili globali.
*/ 
void salvaStatistiche() {
    ofstream file("statistiche.txt"); // ofstream crea o sovrascrive il file
    if (file.is_open()) {
        file << vittorie << " " << pareggi << " " << sconfitte;
        file.close();
    }
}

string Scelta_pc() {
    srand(time(NULL));
    int random = rand()%3;

    if (random == 0 ) return "sasso";
    else if (random == 1 ) return "carta";
    else return "forbici";
}

string logica(string utente, string pc) {
    if (utente == pc)  {
        pareggi += 1;
        return "pareggio";

    } else if ( (utente == "sasso" && pc == "forbici") ||
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
    caricaStatistiche(); // Prima cosa: caricare le statistiche se il file esiste

    cout << "Gioca a sasso, carta, forbici" << endl;

    while (true) {
        string user = "";

        while (true) {
            cout << "Fai la tua scelta" << endl;
            cin >> user;

            // Ho aggiunto alcune opzioni extra facili da capire
            if (user == "sasso" || user == "carta" || user == "forbici") {
                break;

            } else if (user == "stop") {

                return 0;

            } else if (user == "reset") {
                vittorie = 0, pareggi = 0, sconfitte = 0;

                salvaStatistiche();
                cout << "Statistiche azzerate: (Vittorie: " << vittorie << " ) (Pareggi: " << pareggi << " ) (Sconfitte: " << sconfitte << " ) " << endl;

            } else if (user == "statistiche"){
                cout << "(Vittorie: " << vittorie << " ) (Pareggi: " << pareggi << " ) (Sconfitte: " << sconfitte << " ) " << endl;

            } else {
                cout << "Scrivi una scelta corretta" << endl;
            }
        }

        string pc = Scelta_pc();
        cout << "Il PC ha scelto: " << pc << endl;

        cout << logica(user, pc) << endl;

        salvaStatistiche();  // Ogni round salva le statistiche

        cout << "Statistiche: (Vittorie: " << vittorie << " ) (Pareggi: " << pareggi << " ) (Sconfitte: " << sconfitte << " ) " << endl;
    }
}