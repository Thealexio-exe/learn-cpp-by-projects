#include <iostream>

using namespace std;

int main() {

    float side1 = 0, side2 = 0, side3 = 0;

    cout << "Insert side 1: " << endl;
    cin >> side1;

    cout << "Insert side 2: " << endl;
    cin >> side2;

    cout << "Insert side 3: " << endl;
    cin >> side3;

    /*
    The error is here.

    This is a logic error and I would consider it medium difficulty.

    Suggested approach:
    - Run the program
    - Test different values
    - Understand what does not work
    - Find the best solution

    There are two possible ways to solve it.
    */
    if (side1 == side2 && side2 == side3 && side3 == side1) {
        cout << "equilateral" << endl;
    }else if (side1 == side2 && side3 == side2 && side3 != side1) {
        cout << "isosceles" << endl;
    } else {
        cout << "scalene" << endl;
    }
}