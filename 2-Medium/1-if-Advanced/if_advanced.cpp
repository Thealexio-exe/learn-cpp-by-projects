#include <iostream>

using namespace std;

// This time, you'll have to try to get the result inside the if statement
// the only way to figure this out is to find ways to satisfy the condition of the if statement

int main() {
    
    //Remove the comment and insert either true or false

    bool A = true;
    bool B /* =  */;
    bool C /* =  */;
    bool D /* =  */;

    // If you're having trouble with Boolean syntax, check the README
    if (((A == B || !B) && !(C == A && C) && D)) 
        cout << "The result is correct ";
    else
        cout << "No, that's incorrect ";

    // next try if ((!(A || B) == (!A && !B)) 
}