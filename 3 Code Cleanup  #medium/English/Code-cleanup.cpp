#include <iostream> 
// This time I left the entire explanation in the README.md file.

using namespace std;

// int function that adds two numbers and returns the result.
int Sum(int num1, int num2) {
    int sum = num1 + num2;

    cout << "sum calculated\n";

    return sum;
}

int main() {
    int number_1 = 0, number_2 = 0, sum = 0;

    // User input
    cout << "Enter the first number: ";
    cin >> number_1;

    cout << "Enter the second number: ";
    cin >> number_2;

    // Program output
    sum = Sum(number_1, number_2);
    cout << "The result is: " << sum << endl;

    // Check the value of the sum variable
    if (sum <= 10) {
        cout << "Sum is less than ten\n";
    } else {
        cout << "Sum is greater than 10\n";
    }

    return 0;
}