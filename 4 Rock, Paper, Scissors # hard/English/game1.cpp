```cpp
#include <iostream> 
#include <string> // Library for using string variables.
#include <cstdlib> // These two libraries are needed to generate random numbers.
#include <ctime>

using namespace std;

// If you don't know how to use functions, watch a YouTube video because this program only uses functions.

/*
This function does the following:

- rand is used to generate random numbers.
- srand is used to regenerate them, otherwise the random number would not change.
- The random number determines the function's result.
- With a return, the function returns its choice.

*/
string Pc_choice() {
    srand(time(NULL));
    int random = rand()%3;

    if (random == 0 ) return "rock";
    else if (random == 1 ) return "paper";
    else return "scissors";
}

/*
This function contains the logic of Rock, Paper, Scissors.
It is very easy to understand if you know how to use if statements.
*/
string logic(string user, string PC) {
    if (user == PC)  {
        return "draw";
    }
    else if ((user == "rock" && PC == "scissors") ||
             (user == "paper" && PC == "rock") ||
             (user == "scissors" && PC == "paper") ) {
        return "You won";
    } else {
        return "You lost";   
    }
}

int main() {

    cout << "Play Rock, Paper, Scissors" << endl;

    // A while(true) loop to make the game playable forever.
    while (true) {
        string User = "";

        while (true) {
            cout << "Make your choice:" << endl;
            cin >> User;

            if (User == "rock" || User == "paper" || User == "scissors") {
                break;

            } else if (User == "stop") {
                return 0;
                
            } else {
                cout << "Enter a valid choice." << endl;
            }
        }

        /*
        Here we use the functions created earlier:

        - The first one assigns a random choice to the pc variable.
        - The second one takes the two variables and decides who won.

        */
        string pc = Pc_choice();
        cout << "The PC chose: " << pc << endl;

        cout << logic(User, pc) << endl;

    }
}
```
