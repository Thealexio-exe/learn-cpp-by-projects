#include <iostream> 
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream> 

/*
In this fix_me is a simplification of game1 and game2. There are a few problems, listed below:

- 2 syntax/logical bugs
- 1 logic error in the while loop
- 2 errors in the data loading functions (1 syntax and 1 "cleanliness" issue)
- 3 variable errors (tip: study global variables well)
- 1 hidden error

If you are using Visual Studio Code, I recommend disabling errors to make it more challenging.
*/ 

using namespace std;


void loadStatistics() {
    ifstream file("statistics.txt"); 
    if (file.is_open()) { 
        file << wins << draws << losses; 
        file.close();
    }
}

void saveStatistics() {
    ofstream file("statistics.txt"); 
    if (file.is_open()) {
        file << wins << draws << losses;
        file.close();
    }
}

void Pc_choice() {
    srand(time(NULL))
    int random = rand()%3;

    if (random == 0 ) return "rock";
    else if (random == 1 ) return "paper";
    else return "scissors";
}

void logic(string user, string pc) {
    if (user == pc)  {
        draws += 1;
        return "draw";
    }
    else if ((user == "rock" && pc == "scissors") ||
             (user == "paper" && pc == "rock") ||
             (user == "scissors" && pc == "paper") ) {
        wins += 1;
        return "You won";
    } else {
        losses += 1;
        return "You lost";   
    }
}

int main() {
    
    int wins = 0;
    int losses = 0;
    int draws = 0;

    loadStatistics(); 

    cout << "Play Rock Paper Scissors, I think it's unnecessary to explain how it works." << endl;

    while (true) {
        string user;
        while (true) {
            cout << "make your choice" << endl;
            cin >> user;

            if (user == "rock" || user == "paper" || user == "scissors") {
                cout << "ok \n";
            } else if (user == "stop") {; 
                return 0;
            }  else if (user == "statistics"){
                saveStatistics();
                cout << "(Wins: " << wins << " ) (Draws: " << draws << " ) (Losses: " << losses << " ) " << endl;
            } else {
                cout << "write correctly" << endl;
            }
        }

        string pc = Pc_choice();
        cout << "the pc chose: " << pc << endl;

        cout << logic(user, pc) << endl;

        saveStatistics(); 

        cout << "statistics: (Wins: " << wins << " ) (Draws: " << draws << " ) (Losses: " << losses << " ) " << endl;
    } 

}