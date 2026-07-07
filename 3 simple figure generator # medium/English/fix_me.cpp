#include <iostream>

using namespace std;

int main() {

    int size = 0;

    cout << "Enter the size: ";
    cin >> size;
    cout << endl;

    /*
    This part is exactly the same as the previous exercise,
    but this time there is a small logic error.

    Try to find it just by reading the code before running it.
    */

    for (int i = 1; i <= size; i++) {

        for (int j = 0; j < size - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    /*
    Your goal is to complete the code below.
    It should print the same triangle as above, but upside down, creating a diamond shape.

    Think about the logic:

    - Which value should increase every row?
    - Which value should decrease?
    - Can you reuse the formulas from the first triangle?
    */

    for (int i = 0; i <= size; i++) {

        for (int c = 0; /* Complete this condition */; c++) {
            cout << " ";
        }

        for (int c = 0; /* Complete this condition */; c++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}