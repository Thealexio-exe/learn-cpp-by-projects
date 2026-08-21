// This is a comment.
// Everything after // is ignored by the program.

/*
This is a library that allows you to use commands like cin, cout, etc.
*/
#include <iostream>

/*
When you use commands like cout, you normally have to write std::cout.
This line allows you to avoid writing "std::" every time.

Note: this is fine for learning, but in larger projects it is better
to avoid it to prevent naming conflicts.
*/
using namespace std;

// Code inside main() is executed from top to bottom.
int main() {

    // A variable is a container for data that can change over time.
    // First you write the type (int = integer numbers),
    // then the name of the variable, and then its value.
    // You can also change its value later.
    int var = 0;
    var = 5;

    // This prints text on the screen.
    // Output: result: 5
    cout << "result: " << var << endl;

    // This ends the program.
    // You can think of it as "closing" the program.
    return 0;
}