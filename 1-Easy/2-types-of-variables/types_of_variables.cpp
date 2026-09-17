#include <iostream>
#include <string> // this library is needed to add a data type

using namespace std;

int main() {

    // below I have added all the data types that can be used in C++
    // for each one there is an example, I only included the most commonly used ones, but there are others:

    // Whole numbers
    int var_int = 100;

    // Decimal numbers
    float var_float = 3.14;         // it is less precise and can store fewer decimal digits
    double var_double = 2.71828;    // it is more precise and can store more decimal digits
    
    // Booleans
    bool var_bool = true;           // boolean variables can only have two values: "true" and "false", like on and off
    var_bool = false;

    // Strings and characters
    char var_char = 'A';             // char contains a single text character, remember to use '
    string var_string = "Hi world";  // it can only be used with the <string> library, here you can store entire sentences, remember to use "

    // in the future you will learn about other data types, but for now these are enough
}