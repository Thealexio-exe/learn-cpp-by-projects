#include <iostream>
#include <string>
#include <random>
#include <chrono>
#include <thread>
#include <fstream>

using namespace std;
using namespace chrono;
using namespace this_thread;

int vittorie = 0;
int sconfitte = 0;
int pareggi = 0;


void caricaStatistiche() {
    ifstream file("statistiche.txt");
    if (file.is_open()) {
        file >> vittorie >> pareggi >> sconfitte;
        file.close();
    }
}

void salvaStatistiche() {
    ofstream file("statistiche.txt");
    if (file.is_open()) {
        file << vittorie << " " << pareggi << " " << sconfitte;
        file.close();
    }
}

string sceltapc() {

    random_device c;
    mt19937 gen(c());
    uniform_int_distribution<> dis(0, 2);
    int random = dis(gen);

    if (random == 0 ) return "sasso";
    else if (random == 1 ) return "carta";
    else return "forbici";
}

string logica(string utente, string coputer) {
    if (utente == coputer)  {
        pareggi += 1;
        return "pareggio";
    }
    else if ((utente == "sasso" && coputer == "forbici") ||
             (utente == "carta" && coputer == "sasso") ||
             (utente == "forbici" && coputer == "carta") ) {
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
        string utentefigo;
        while (true) {
            cout << "fai la tua scelta" << endl;
            cin >> utentefigo;

            if (utentefigo == "sasso" || utentefigo == "carta" || utentefigo == "forbici" || utentefigo == "pistola") {
                break;
            } else if (utentefigo == "stop") {
                salvaStatistiche();
                return 0;
            } else if (utentefigo == "reset") {
                vittorie = 0;
                pareggi = 0;
                sconfitte = 0;
                salvaStatistiche();
                cout << "statistiche azzerate: (Vittorie: " << vittorie << " ) (Pareggi: " << pareggi << " ) (Sconfitte: " << sconfitte << " ) " << endl;
            } else if (utentefigo == "statistiche"){
                salvaStatistiche();
                cout << "(Vittorie: " << vittorie << " ) (Pareggi: " << pareggi << " ) (Sconfitte: " << sconfitte << " ) " << endl;
            } else {
                cout << "scrivi in maniera corretta" << endl;
            }
        }

        string pc = sceltapc();
        cout << "il pc ha scelto: ";
        sleep_for(seconds(1));
        cout << pc << endl;

        sleep_for(milliseconds(120));

        cout << logica(utentefigo, pc) << endl;

        salvaStatistiche();

        cout << "statistiche: (Vittorie: " << vittorie << " ) (Pareggi: " << pareggi << " ) (Sconfitte: " << sconfitte << " ) " << endl;
    }
}
