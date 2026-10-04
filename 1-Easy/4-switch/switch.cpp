#include <iostream>

using namespace std;

// In this program, I'll introduce the use of the switch statement, a construct similar to if/else
// Check the README: I’ve put most of the explanations there
// In the comments in this file, I mainly explain the syntax

int main() {
    int day;


    // Let’s start by assigning a value to an int variable
    cout << "Enter a number from 1 to 7: ";
    cin >> day;

    // The switch statement works similarly to an if statement, but it checks the value of a single variable
    switch (day) { 
        case 1:    // Instead of `if`, we use `case`, followed by the value we want to check
            cout << "Monday" << endl;
            break; /* This statement will be explained in more detail shortly, but for now, just remember this concept:
                      if “day = 1”, then “case 1” is true and the code inside it is executed.
                      Without the `break`, the program would continue to execute the subsequent `case` statements as well. */
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:  // “default” works similarly to ‘else’: if no “case” matches, this code is executed
            cout << "Error" << endl; 
            break;
    }

    return 0;
}