#include <iostream> 
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream> // aggiungiamo questa libreria per manipolare file esterni

using namespace std;

// variabili globali
int vittorie = 0;
int sconfitte = 0;
int pareggi = 0;


// in questa fuznione  il programma va a cercare il file statistiche.txt, dove al suo interno ci sarammo scritte le tre variabili 
void caricaStatistiche() {
    ifstream file("statistiche.txt"); // ifstream legge e cerca
    if (file.is_open()) { // se lo trova legge le variabili
        file >> vittorie >> pareggi >> sconfitte; 
        file.close();
    }
}

/*
ogni volta che si fa un raund si utilizza una funzione che aggiorna il file scrivedo, 
semplicemte guarda quanto valgono le tre variabili globari 
*/ 
void salvaStatistiche() {
    ofstream file("statistiche.txt"); // ofstream crea o modifica
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
    caricaStatistiche(); // prima cosa caricare se ci sono le tre variabili

    cout << "gioca a sasso carta forbici, credo che sia inutile che ti spiegi come funziona." << endl;

    while (true) {
        string user = "";

        while (true) {
            cout << "fai la tua scelta" << endl;
            cin >> user;

            // ho aggiunto un po di cose facili da capire
            if (user == "sasso" || user == "carta" || user == "forbici") {
                break;
            } else if (user == "stop") {

                return 0;

            } else if (user == "reset") {
                vittorie = 0, pareggi = 0, sconfitte = 0;

                salvaStatistiche();
                cout << "statistiche azzerate: (Vittorie: " << vittorie << " ) (Pareggi: " << pareggi << " ) (Sconfitte: " << sconfitte << " ) " << endl;

            } else if (user == "statistiche"){
                cout << "(Vittorie: " << vittorie << " ) (Pareggi: " << pareggi << " ) (Sconfitte: " << sconfitte << " ) " << endl;
            } else {
                cout << "scrivi in maniera corretta" << endl;
            }
        }

        string pc = Scelta_pc();
        cout << "il pc ha scelto: " << pc << endl;

        cout << logica(user, pc) << endl;

        salvaStatistiche();  // qui ogni volta salva e poi fa veredere i risultati

        cout << "statistiche: (Vittorie: " << vittorie << " ) (Pareggi: " << pareggi << " ) (Sconfitte: " << sconfitte << " ) " << endl;
    } // prova diverse volte questo programma
}