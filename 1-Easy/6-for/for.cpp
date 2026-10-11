#include <iostream>
#include <string>

using namespace std;

int main() {
    string name = "";
    
    // Let's have the user enter a variable
    cout << "Enter your name: ";
    cin >> name;

    // Since the logic takes a while to explain in a single comment, I've written everything in the README this time
    for(int i = 0; i < 5; i++ ) {
        cout << i ". Your name: " << name << endl;
    }

    /* OUTPUT:
        name = "Mario"

        0. Your name: Mario
        1. Your name: Mario
        2. Your name: Mario
        3. Your name: Mario
        4. Your name: Mario
    */
}