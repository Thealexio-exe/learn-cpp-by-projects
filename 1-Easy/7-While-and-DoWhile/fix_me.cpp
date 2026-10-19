#include <iostream>

using namespace std;

// Good luck ;)

int main() {
    int Input_user = 0;
    char input_char;

    do {
        
        cout << "If you enter the number 6, you close the loop: ";
        cin >> Input_user;

    } while (!(Input_user == 6));

    cout << "Type A to enter the while loop: ";
    cin >> Input_user;

    while (!(input_char == 'A') && !(Input_user == 5)) {
        
        cout << "If you enter the number 5, you close the loop: ";
        cin >> Input_user;

        while (true) {
            cout << "Secondo Input but enter \'A\': ";
            cin >> input_char;

            if (input_char != 'a') {
                break;
            } else {
                cout << "error" << endl;
            }
        }
        

    }
    
    return 0;

}