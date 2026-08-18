#include <iostream> 
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream> // We add this library to manipulate external files.

using namespace std;

// Global variables
int wins = 0;
int losses = 0;
int draws = 0;


// In this function, the program looks for the file "statistics.txt".
// Inside it, the three variables are stored.
void loadStatistics() {
    ifstream file("statistics.txt"); // ifstream opens and reads a file
    if (file.is_open()) { // If the file exists, read the variables
        file >> wins >> draws >> losses;
        file.close();
    }
}

/*
Every time a round is played, this function updates the file by writing
the current values of the three global variables.
*/
void saveStatistics() {
    ofstream file("statistics.txt"); // ofstream creates or modifies a file
    if (file.is_open()) {
        file << wins << " " << draws << " " << losses;
        file.close();
    }
}

string Pc_choice() {
    srand(time(NULL));
    int random = rand()%4;

    if (random == 0 ) return "rock";
    else if (random == 1 ) return "paper";
    else return "scissors";
}

string logic(string user, string pc) {
    if (user == pc)  {
        draws += 1;
        return "Draw";

    } else if ((user == "rock" && pc == "scissors") ||
               (user == "paper" && pc == "rock") ||
               (user == "scissors" && pc == "paper")) {
        wins += 1;
        return "You won";

    } else {
        losses += 1;
        return "You lost";
    }
}

int main() {
    loadStatistics(); // First, load the saved variables if they exist.

    cout << "Play Rock, Paper, Scissors." << endl;

    while (true) {
        string user = "";

        while (true) {
            cout << "Make your choice:" << endl;
            cin >> user;

            // I added a few easy-to-understand commands.
            if (user == "rock" || user == "paper" || user == "scissors") {
                break;

            } else if (user == "stop") {

                return 0;

            } else if (user == "reset") {
                wins = 0, draws = 0, losses = 0;

                saveStatistics();
                cout << "Statistics reset: (Wins: " << wins << " ) (Draws: " << draws << " ) (Losses: " << losses << " ) " << endl;

            } else if (user == "statistics") {
                cout << "(Wins: " << wins << " ) (Draws: " << draws << " ) (Losses: " << losses << " ) " << endl;

            } else {
                cout << "Enter a valid choice." << endl;
            }
        }

        string pc = Pc_choice();
        cout << "The PC chose: " << pc << endl;

        cout << logic(user, pc) << endl;

        saveStatistics(); // Save the statistics after every round.

        cout << "Statistics: (Wins: " << wins << " ) (Draws: " << draws << " ) (Losses: " << losses << " ) " << endl;
    } // Try playing this program multiple times.
}