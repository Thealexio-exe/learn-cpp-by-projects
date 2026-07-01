#include <iostream>

using namespace std;

int main() {

    float side1 = 0, side2 = 0, side3 = 0;

    cout << "Insert side 1: \n";
    cin >> side1;

    cout << "Insert side 2: \n";
    cin >> side2;

    cout << "Insert side 3: \n";
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
        cout << "equilateral\n";
    }else if (side1 == side2 && side3 == side2 && side3 != side1) {
        cout << "isosceles\n";
    } else {
        cout << "scalene\n";
    }
}