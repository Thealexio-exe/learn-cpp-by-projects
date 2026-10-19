#include <iostream>

using namespace std;

int main() {
    int Input_user = 0;
    char input_char;

    /*
        While loops execute the statements until the condition becomes false
        essentially, they behave like indefinite for loops.
        There are two types of while loops: while() | do {} while()
    */


    // The do while loop first executes the code within it and then checks the condition
    do {
        
        cout << "If you enter the number 5, you close the loop: ";
        cin >> Input_user;

    } while (Input_user != 5);
    // Until the user enters 5, they will not be able to exit the loop


    // The `while` loop checks the condition, if it is true, it executes
    cout << "Type A to enter the while loop: ";
    cin >> input_char;

    while (input_char == 'A' || Input_user != 5) {

        // I reset this variable otherwise, the condition would always be true
        input_char = 'b';
        
        cout << "If you enter the number 5, you close the loop: ";
        cin >> Input_user;

    }
    
    return 0;

}