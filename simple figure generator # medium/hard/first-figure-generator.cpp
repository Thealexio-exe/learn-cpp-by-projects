#include <iostream>

using namespace std;

int main() {

    int size = 0;

    cout << "Enter the size: ";
    cin >> size;

    // The program repeats this loop "size" times.
    for (int i = 1; i <= size; i++) {

        /* To build the triangle we use two nested loops:
        - the first prints the spaces
        - the second prints the stars */

        /* The logic is simple:
        Start with the maximum number of spaces, then remove one
        space every iteration.

        Example (size = 5):

        i = 1 -> 4 spaces
        i = 2 -> 3 spaces
        i = 3 -> 2 spaces, ecc... */
        for (int j = 0; j < size - i; j++) {
            cout << " ";
        }

        /* This loop prints the stars.

        The formula is:
            2 * i - 1
        Why?

        i = 1 -> 1 star
        i = 2 -> 3 stars
        i = 3 -> 5 stars

        Each row increases by two stars, creating a symmetric triangle.

        Without the "-1", the rows would contain:
        2, 4, 6, ...

        and the shape would no longer be centered correctly. */

        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}