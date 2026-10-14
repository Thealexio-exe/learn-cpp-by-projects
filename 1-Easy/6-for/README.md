# For

<table>
    <tbody>
        <tr>
            <td>
                <strong>Tag:</strong>
            </td>
            <td>
                <img alt="for" src="https://img.shields.io/badge/-for-green">
                <img alt="string" src="https://img.shields.io/badge/-string-green">
            </td>
        </tr>
    </tbody>
</table>

Select the languages: [English](#english) | [Italiano](#italiano)

# English

## Introduction and Explanations:

The `for` loop has a slightly more complex syntax than other constructs, which is why I avoided including explanations in the [`for.cpp`](./for.cpp) file. To explain the `for` loop, I decided to divide the condition into three parts (I combined parts 2 and 3):

```cpp
for(/*first part -> */ int i = 0; /*second/third part -> */ i < 5; i++)
```

1) In the first part, we have `int i = 0;`. Here, we **declare** and **initialize** a variable, as we’ve already seen in [**Hello_world.cpp**](../1-Hello-world/Hello_world.cpp). The variable `i` is local; you can only use it inside the `for` loop (try writing `cout << i` outside the `for` loop and see what happens). You aren’t required to name it `i`, but by convention, `i` or `j` are often used as variable names in loops.

2) In the second part, we have `i < 5`, and in the third part, we have `i++`. The condition `i < 5` is checked before each iteration: if it’s true, the loop runs; at the end of the iteration, `i++` increments `i` by 1 (essentially `i+1`). To explain this better, here’s an example:

```bash
Example: (int i = 0); i < 5; i++ | How it works:  0 < 5 -> true | i++ -> 0+1 | 1 < 5 -> true | i++ -> 1+1 | ... | 4 < 5 -> true | i++ -> 4+1 | 5 < 5 -> false
```

Basically, from this example you can see how a `for` loop works: the body is executed when the condition is true. In this case, the loop runs with `i` ranging from `0` to `4`.

One last important point: initialization and incrementing can be handled either outside the `for` loop header or inside its body. For example:

```cpp
int i = 0;
for (; i < 5;) {
    cout << i << endl;
    i++;
}
```

In this example, it’s important to remember to increment `i`—if you don’t, the condition will always remain true and the loop won’t end. However, I strongly advise against using this syntax; it’s not very elegant, and more importantly, it’ll just make your life harder.

> [!TIP]
> Remember that you need to include two `;` in the `for` statement header to separate the three parts—otherwise, get ready for a nice error screen *:)*

If you want to practice with `for` loops, remember that there’s another, more complex exercise in [`for-loops`](../../2-Medium/1-For-Loops-Advanced/For_Loops_Advanced.cpp).

## Solutions:

<details>
<summary>Click to view the solutions</summary>

This time there are no bugs to fix: you can try different conditions and see what happens. The more you experiment, the better you’ll understand how `for` loop conditions work, but if you’re having trouble or just want to do some exercises, here are a few conditions to try. See if you can figure out how they work on your own by compiling the code and observing the results—trust me, it’s not hard.

```cpp
for (int i = 0; i > 5; i++) {
    cout << i << endl;
}
```

```cpp
for (int i = 0; i <= 10; i++) {
    cout << i << endl;
}
```

```cpp
for (int i = 0; i <= 6; i--) {
    cout << i << endl;
}
```

</details> <br>

# Italiano

## Introduzione e spiegazioni:

Il `for` ha una sintassi un po' più complessa rispetto ad altri costrutti, per questo ho evitato spiegazioni sul file [`for.cpp`](./for.cpp), per spiegare il `for` ho deciso di dividere la condizioni in 3 parti (la 2 e 3 le ho messe insieme):

```cpp
for(/*prima parte -> */ int i = 0; /*seconda/terza parte -> */ i < 5; i++)
```

1) Nella prima parte troviamo `int i = 0;` qui **dichiariamo** e **inizializziamo** una variabile, come già visto in [**Hello_world.cpp**](../1-Hello-world/Hello_world.cpp), la variabile `i` è locale, puoi utilizzarla solo all'interno del `for` (prova a fare un `cout << i` fuori da for e vediamo cosa succede). Non sei obbligato a chiamarla `i` ma per convenzione, spesso si usano `i` o `j` come nomi di variabili nei cicli.

2) Nella seconda parte troviamo `i < 5` e mentre nella terza troviamo `i++`, la condizione `i < 5` viene controllata prima di ogni iterazione: se è vera, viene eseguito il ciclo, alla fine dell'iterazione `i++` incrementa `i` di 1 (in pratica i+1). Per spiegarmi meglio, faccio un esempio:

```bash
ES: (int i = 0); i < 5; i++ | Funzionamento:  0 < 5 -> true | i++ -> 0+1 | 1 < 5 -> true | i++ -> 1+1| ... | 4 < 5 -> true | i++ -> 4+1 | 5 < 5 -> false
```

In pratica, dall'esempio puoi vedere come funziona un ciclo `for`, il corpo viene eseguito quando la condizione è vera, in questo caso il ciclo viene eseguito con `i` da `0` a `4`, 

Un'ultima cosa importante l'inizializzazione e l'aggiornamento possono essere gestiti fuori dall'intestazione del `for` o all'interno del suo corpo, per esempio:

```cpp
int i = 0;
for (; i < 5;) {
    cout << i << endl;
    i++;
}
```

In questo esempio, è importante ricordarsi di incrementare `i`, se non lo facessi, la condizione rimarrebbe sempre vera e il ciclo non terminerebbe, però mi raccomando non usare qusta sintassi, non è bella da vedere ma soprattutto ti complichi la vita.

> [!TIP]
> Ricorda che nell'intestazione del `for` vanno inseriti due `;`, che separano le tre parti sennò preparati a una bella schermata di errore *:)*

se vuoi allenarti con i `for`, ricorda che c'è un altro esercizio più complesso in [`for-loops`](../../2-Medium/1-For-Loops-Advanced/For_Loops_Advanced.cpp).

## Soluzioni:

<details>
<summary>Clicca per vedere le soluzioni</summary>

Questa volta non ci sono bug da risolvere: puoi provare diverse condizioni e osservare cosa succede. Più prove farai, più capirai come funzionano le condizioni dei `for`, ma se hai difficoltà o vuoi comunque fare degli esercizi, ecco alcune condizioni da provare, prova a capire da solo come funzionano compilando e osservando il risultato, fidati non è difficile.

```cpp
for (int i = 0; i > 5; i++) {
    cout << i << endl;
}
```

```cpp
for (int i = 0; i <= 10; i++) {
    cout << i << endl;
}
```

```cpp
for (int i = 0; i <= 6; i--) {
    cout << i << endl;
}
```

</details>