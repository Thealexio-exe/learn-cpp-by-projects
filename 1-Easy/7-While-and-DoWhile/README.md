# While and Do_While

<table>
    <tbody>
        <tr>
            <td>
                <strong>Tag:</strong>
            </td>
            <td>
                <img alt="while" src="https://img.shields.io/badge/-while-green">
                <img alt="do while" src="https://img.shields.io/badge/-do%20while-green">
            </td>
        </tr>
    </tbody>
</table>

Select the languages: [English](#english) | [Italiano](#italiano)

# English

`while` loops are indefinite loops: they can run indefinitely as long as the condition does not become **<span style="color: blue;">false</span>**.

There are two types of `while` constructs: *1 `while`* and *2 `do while`*:

1. **`while`** first checks the condition and then executes the code. Example:

```cpp
int counter = 5;

while (counter > 0) {
    cout << counter << endl;

    counter--;
}
```

As you can see, it first checks that the condition is <span style="color: blue;">true</span> and then executes the code until the condition becomes <span style="color: blue;">false</span>

2. **`do`**, on the other hand, executes the code once and then checks the condition. Example:

```cpp
int input;

do {

    cout << “Enter number 1: ”;
    cin >> input;

} while(input != 1);
```

This way, the user is prompted to enter data until they enter the correct value.

>[!TIP]
> If you’re wondering when to use `while` or `do while`, it depends: sometimes it’s better to use `do while` if you want the user to enter data, while you might use `while` if you want to check the condition before executing the code—perhaps using `while (true)` and `break` if there are many conditions

**Solutions:**

<details>
<summary>Click to view the solutions</summary>

The program has no syntax errors, but there are some logical errors.

The first `do while` loop continues until you enter 6. The condition `!(Input_user == 6)` works, but it can be written more simply as `Input_user != 6` <br>
After the first loop, the program asks you to enter A, but it reads the value from `Input_user` instead of `input_char`; consequently, `input_char` is not initialized when it is checked in the `while` condition.

Furthermore, the original `while` condition is the opposite of what the message states: with `!(input_char == ‘A’)`, the loop does not enter when you enter ‘A’. Here, I interpret that ‘A’ is used to enter the loop and that the number 5 is used to exit it.

The check in the inner loop is also reversed and uses lowercase `‘a’`, not `‘A’`. As written, the program displays *error* when you enter `a` and exits the inner loop with any other character. To prompt for the character again until `A` is entered, we can use a `do while` loop

```cpp
#include <iostream>

using namespace std;

int main() {
    int input_user = 0;
    char input_char;

    do {
        cout << “If you enter the number 6, you close the loop: ”;
        cin >> input_user;
    } while (input_user != 6);

    cout << “Type A to enter the while loop: ”;
    cin >> input_char;

    while (input_char == ‘A’ && input_user != 5) {
        cout << “If you enter the number 5, you close the loop: ”;
        cin >> input_user;

        if (input_user != 5) {
            do {
                cout << “Second input: enter ‘A’: ”;
                cin >> input_char;

                if (input_char != ‘A’) {
                    cout << “Error” << endl;
                }
            } while (input_char != ‘A’);
        }
    }
}
```
</details>

<br>

# Italiano

I cicli `while` sono cicli a iterazione indefinita: possono essere eseguiti all'infinito finché la condizione non diventa **<span style="color: blue;">false</span>**.

Ci sono due tipologie di costrutti `while`: *1 `while`* e *2 `do while`*:

1. **`while`** controlla prima la condizione e poi esegue il codice. Esempio:

```cpp
int contatore = 5;

while (contatore > 0) {
    cout << contatore << endl;

    contatore--;
}
```

come puoi vadere, prima controlla che la condizione sia <span style="color: blue;">true</span> e poi esegue il codice finché la condizione non diventa <span style="color: blue;">false</span>

2. **`do`** invece esegue una volta e poi controlla la condizione, esempio:

```cpp
int input;

do {

    cout << "inserisci il numero 1: ";
    cin >> input;

} while(input != 1);
```

in questo modo l'utente rimane bloccato ha inserire un dato finchè non inserirà quello giusto.

>[!TIP]
> Se ti stai chiedendo in quali casi dovresti usare `while` o `do while`, dipende a volte è meglio usare `do while` se si vuole far inserire un dato a un utente, mentre `while` potresti usarlo se vuoi controllare la condizione prima di eseguire il codice, magari utilizzando `while (true)` e `break` se ci sono tante condizioni

**Soluzioni:**

<details>
<summary>Clicca per vedere le soluzioni</summary>

Il programma non presenta errori di sintassi, ma ci sono alcuni errori logici.

Il primo ciclo `do while` continua finché non inserisci 6. La condizione `!(Input_user == 6)` funziona, ma si può scrivere più semplicemente come `Input_user != 6` <br>
dopo il primo ciclo, il programma chiede di inserire A, ma legge il valore in Input_user invece che in `input_char` di conseguenza, `input_char` non è inizializzata quando viene controllata nella condizione del `while`.

Inoltre, la condizione originale del `while` è opposta al messaggio: con `!(input_char == 'A')` il ciclo non entra quando inserisci A. Qui interpreto che A serva per entrare nel ciclo e che il numero 5 serva per uscirne.

Anche il controllo nel ciclo interno è invertito e usa `'a'` minuscola, non `'A'`, così com’è scritto, il programma mostra *error* quando inserisci `a` e termina il ciclo interno con qualsiasi altro carattere, per chiedere di nuovo il carattere finché non viene inserita `A`, possiamo usare un ciclo `do while`

```cpp
#include <iostream>

using namespace std;

int main() {
    int input_user = 0;
    char input_char;

    do {
        cout << "If you enter the number 6, you close the loop: ";
        cin >> input_user;
    } while (input_user != 6);

    cout << "Type A to enter the while loop: ";
    cin >> input_char;

    while (input_char == 'A' && input_user != 5) {
        cout << "If you enter the number 5, you close the loop: ";
        cin >> input_user;

        if (input_user != 5) {
            do {
                cout << "Second input: enter 'A': ";
                cin >> input_char;

                if (input_char != 'A') {
                    cout << "Error" << endl;
                }
            } while (input_char != 'A');
        }
    }
}
```
</details>