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
    The error is here.                                                  | L'errore si trova qui.
    This is a logic error and I would consider it medium difficulty.    | È un errore di logica e lo considererei di difficoltà media.

    Suggested approach:                                                 | Ti consiglio di procedere così:
    - Run the program                                                   | - Esegui il programma.
    - Test different values                                             | - Prova diversi valori.
    - Understand what does not work                                     | - Cerca di capire cosa non funziona.
    - Find the best solution                                            | - Trova la soluzione migliore.

    There are two possible ways to solve it.                            | Ci sono due possibili modi per risolverlo.
    */
    if (side1 == side2 && side2 == side3 && side3 == side1) {
        cout << "equilateral" << endl;
    }else if (side1 == side2 && side3 == side2 && side3 != side1) {
        cout << "isosceles" << endl;
    } else {
        cout << "scalene" << endl;
    }
}