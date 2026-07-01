#include <iostream>

using namespace std;

int main() {

    // I used float to allow decimal numbers.
    float side1 = 0, side2 = 0, side3 = 0;

    // Insert 3 values, each one represents a side of a triangle.
    cout << "Insert side 1: \n";
    cin >> side1;

    cout << "Insert side 2: \n";
    cin >> side2;

    cout << "Insert side 3: \n";
    cin >> side3;

    /*
    Pay attention to the logic.
    The first condition checks: "If all sides are equal, then the triangle is equilateral."
    if you wont, you can simplify this if statement
    */
    if (side1 == side2 && side2 == side3 && side3 == side1) {
        cout << "equilateral\n";
    }

    /* != means "not equal", so here the logic is:
    if all sides are different, the triangle is scalene. */
    else if (side1 != side2 && side3 != side2 && side3 != side1) {
        cout << "scalene\n";
    }

    // Otherwise, two sides must be equal → isosceles.
    else {
        cout << "isosceles\n";
    }
}