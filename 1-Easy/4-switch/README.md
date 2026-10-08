# Switch

<table>
    <tbody>
        <tr>
            <td>
            <strong>Tag:</strong>
            </td>
            <td>
                <img alt="conditions" src="https://img.shields.io/badge/-conditions-green">
                <img alt="if/else" src="https://img.shields.io/badge/-if%2Felse-green">
                <img alt="logical_operators" src="https://img.shields.io/badge/-logical_operators-green">
                <img alt="switch" src="https://img.shields.io/badge/-switch-yellow">
            </td>
        </tr>
    </tbody>
</table>

Select the languages: [English](#english) | [Italiano](#italiano)

# English

## **Introduction and Explanation:**
In this program, I’ve introduced the `switch` statement and its syntax. If you’re wondering what this construct is used for, the answer is simple: the `switch` works very similarly to the `if` statement, with the difference that you can compare the various cases using just one variable of any type. For this reason, you can use the `switch` to:
- improve your code’s syntax; if the program you’re writing can use a `switch` statement, use it—it will improve your code’s syntax
- if you have only one variable to compare, use the `switch` statement instead of `if`—same result but with different syntax

An exercise or example of using the `switch` statement is to create a calculator—without a *GUI* (graphical user interface), of course. This could be a good exercise; all you need to know is `char/int` and `if/switch`.

> [!TIP]
> Remember that you can include `if` statements within the `case` statements to perform additional checks.

<details>
<summary>Click to see the solutions</summary>

Let’s fix [`fix_me.cpp`](./fix_me.cpp). All the errors are in the various `case` statements; in fact, the first one is in the very first `case`

```cpp
case 1 && 0:
    cout << "Monday" << endl;
    break;
```

In and of itself, this isn’t a syntax bug—the program would work—but the compiler transforms that `case 1 && 0:` into `case 0:` <br>
To avoid these issues, I recommend avoiding logical operators in `case` statements; you should only include a single condition.

The second bug is this: the `default` is missing.

```cpp
default:
    cout << "Error" << endl;
    break;
```

Remember to always add `default` at the end of a `switch` statement; it is essential in case of an error and is the equivalent of `else`.

> Finally, if you think on lines 30–32 there’s an bug—that `if` statement is simply **unnecessary**, but not wrong

</details> <br>

# Italiano

## **Introduzione e spiegazione:**
Questo programma ho introdotto lo `switch` è la sua sintassi, se ti stai chidendo a cosa possa servire questo costrutto la risposta è semplice, lo `switch` ha un funzionamento molto simile all `if` con la differenza che puoi confrontare i vari casi solo con una variabile di qualsiasi tipo, per questo puoi sfruttare lo `switch` per:
- migliorare a propria sintassi, se il programma che stai crando può contenere lo `switch` usalo, miglioreresti la sintassi
- se hai una sola variabile da confrontare uso lo `switch` invece che `if`, stesso risultato ma con sintassi differente

Un esercizio/esempio di utilizzo dello `switch` è creare un calcolatrice, senza *GUI* ovviamente (parte grafica). potrebbe esere un buon esercizio bastasta saper `char/int` e `if/switch`

> [!TIP]
> Ricorda che nei `case` puoi inserire degli `if` per fare degli ulteriori controlli

<details>
<summary>Clicca per vedere le soluzioni</summary>

Risolviamo il [`fix_me.cpp`](./fix_me.cpp), tutti gli errori si trovano nai vari `case`, infatti il primo si trova nel primo dei `case`

```cpp
case 1 && 0:
    cout << "Monday" << endl;
    break;
```

In se non è un bug di sintassi il programma funzionerebbe, ma il compilatore trasforma quel `case 1 && 0:` in `case 0:` <br>
Per evitare questi problemi consiglio di evitare di mettere operatori logici, nei `case` è si mette solo una condizione

Il secondo bug è questo, manca il `default` 

```cpp
default: 
    cout << "Error" << endl; 
    break;
```

Ricordati di aggiugnere sempre `default` alla fine di uno `switch`, esso è esenziale in caso di errore è l'equivalente di `else`.

> Infine se pensi che nella linea 30-32 c'è un errore, semplicemente quell'if è **inutile**, ma non è un errore

</details>