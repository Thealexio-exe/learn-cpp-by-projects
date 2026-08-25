# Rock Paper Scissors

Select the languages: [English](#english) | [Italiano](#italiano)

# English

## Introduction:

This time I created 2 versions of the file [`game_basic.cpp`](./game_basic.cpp) and [`game_plus.cpp`](./game_plus.cpp).

In the first one, it is simply explained how to create and how Rock Paper Scissors works in C++, using functions, strings and random numbers. Subsequently, in the second one, two functions were added to manipulate `.txt` files and save variables outside the program.

I also leave you some links to online documentation:

- <a href="https://www.w3schools.com/cpp/cpp_functions.asp">Functions study</a>
- <a href="https://www.w3schools.com/cpp/cpp_strings.asp">String library</a>
- <a href="https://www.w3schools.com/cpp/cpp_howto_random_number.asp">cstdlib library</a>
- <a href="https://www.w3schools.com/cpp/ref_ctime_time.asp">ctime library</a>
- <a href="https://www.w3schools.com/cpp/cpp_ref_fstream.asp">fstream library</a>

## Solutions:

Here are the solutions for the [`fix_me.cpp`](./fix_me.cpp) file. They are divided into **Solutions 1** (easier) and **Solutions 2** (harder).

<details>
<summary>Solutions 1</summary>

Okey, let’s reason step by step. The first error is in the functions [`void Pc_choice()`](./fix_me.cpp#L44) and [`void logic()`](./fix_me.cpp#L53).

In these two functions the type `void` is used, but `void` means “nothing”. From its meaning you can already understand the mistake: the function does not return anything.
To fix this error you just need to replace `void` with `string`, because we want the function to return text as a result.

To make it clearer, here is an example of a `void` function and an `int` function:

```cpp
void write_your_name(string name) {

    for (int i = 0; i <= 10; i++) {
        cout << name << endl;
    }

}
```

> Here the function prints a text value multiple times, but it does not modify variables and does not return any value.
> In other words, with `void` you use a function when you only need to execute code.

```cpp
int Somma(int a, int b) {

    int somma = a + b;
    cout << "The sum is: " << somma << endl;

    return somma;
}
```

> Here instead the program, in addition to performing operations, returns an `int` value, which is the variable `somma`.

---

The second error, which is also the hidden one, is still in [`void Pc_choice()`](./fix_me.cpp#L44):

- the first is that [`srand(time(NULL))`](./fix_me.cpp#L45) is missing a `;`, which is a simple but common mistake;
- the second is in [`int random = rand()%2;`](./fix_me.cpp#L46).
  In programming we always start counting from `0`, and because of this, `scissors` can never be selected. To fix this error, change `rand()%2;` to this version: `rand()%3;`

</details>

<details>
<summary>Solutions 2</summary>

Now let’s look more closely at the errors.

The first error is in the function [`loadStatistics()`](./fix_me.cpp#L28). Let’s analyze it: as you can see in the example below, the mistake is already visible.

```cpp
void loadStatistics() {
    ifstream file("statistics.txt"); 
    if (file.is_open()) { 
        file << wins << draws << losses; 
        file.close();
    }
}
```

With `ifstream` the program **opens and reads a file**, but in the line `file << wins << draws << losses;` there is the main error.

In C++ these operators mean:

- `<<` means **output**
- `>>` means **input**

Here the problem appears: you are telling `ifstream`, which is used for **input**, to use an **output operator**. To fix this error you simply need to replace `<<` with `>>`.

---

The second error is also related to the loading functions, but this time it concerns variables.

```cpp
int wins = 0;
int losses = 0;
int draws = 0;
```

To understand better, keep the [`fix_me.cpp`](./fix_me.cpp) file open. If you look closely, the three variables are inside the [`main()`](./fix_me.cpp#L70-74), and this is a problem because no function outside `main()` can access them.

Try this: create a small program with a function. Inside the function define a variable and then try to print it with `cout` in `main()`. You will see that it will give an error.

If instead you move the variable outside the function, making it global, both the function and `main()` will be able to read and modify it.

</details>

<br>

# Italiano

## Introduzione:

Questa volta ho fatto 2 versioni del file [`game_basic.cpp`](./game_basic.cpp) e [`game_plus.cpp`](./game_plus.cpp).

Nel primo viene spiegato semplicemente come creare e come funziona Sasso Carta Forbici in C++, attraverso funzioni, string e numeri casuali. Successivamente, nel secondo, sono state aggiunte due funzioni per manipolare file `.txt` e salvare le variabili al di fuori del programma.

Ti lascio anche alcuni link alla documentazione online:

- <a href="https://www.w3schools.com/cpp/cpp_functions.asp">Studio funzioni</a>
- <a href="https://www.w3schools.com/cpp/cpp_strings.asp">Libreria string</a>
- <a href="https://www.w3schools.com/cpp/cpp_howto_random_number.asp">Libreria cstdlib</a>
- <a href="https://www.w3schools.com/cpp/ref_ctime_time.asp">Libreria ctime</a>
- <a href="https://www.w3schools.com/cpp/cpp_ref_fstream.asp">Libreria fstream</a>

## Soluzioni:

Qui ti lascio subito le soluzioni del file [`fix_me.cpp`](./fix_me.cpp). Le ho divise in **Soluzioni 1** (più facili) e **Soluzioni 2** (più difficili).

<details>
<summary>Soluzioni 1</summary>

Okey, ragioniamo insieme passo passo. Il primo errore si trova nelle funzioni [`void Pc_choice()`](./fix_me.cpp#L44) e [`void logic()`](./fix_me.cpp#L53).

In queste due funzioni viene usato il valore `void`, ma `void` significa “nulla”. Proprio dal suo significato si può capire qual è l’errore: la funzione non restituisce niente.
Per correggere l’errore basta sostituire `void` con `string`, perché noi vogliamo che come risultato venga restituito del testo.

Per essere sicuro che tu capisca meglio, ecco un esempio di due funzioni `void` e di una funzione `int`:

```cpp
void Scrivi_il_nome(string nome) {

    for (int i = 0; i <= 10; i++) {
        cout << nome << endl;
    }

}
```

> Qui la funzione manda a schermo un valore di testo per un certo numero di volte, ma non va a modificare variabili e non restituisce nessun valore.
> In poche parole, con `void` puoi usare una funzione se ti serve solo eseguire del codice più volte.

```cpp
int Somma(int a, int b) {

    int somma = a + b;
    cout << "La somma è uguale a: " << somma << endl;

    return somma;
}
```

> Qui invece il programma, oltre a fare delle operazioni, restituisce un valore `int`, cioè la variabile `somma`.

---

Il secondo errore, e anche quello segreto, si trova sempre in [`void Scelta_pc()`](./fix_me.cpp#L44):

- il primo è che [`srand(time(NULL))`](./fix_me.cpp#L45) manca di un `;`, quindi è un errore banale ma comune;
- il secondo si trova in [`int random = rand()%2;`](./fix_me.cpp#L46).
  In informatica si parte sempre da `0` quando si conta, e proprio per questo non potrà mai uscire `forbici` come opzione. Per sistemare questo errore cambia `rand()%2;` con questa versione: `rand()%3;`

</details>

<details>
<summary>Soluzioni 2</summary>

Ora guardiamo meglio gli errori presenti.

Il primo errore si trova nella funzione [`loadStatistics()`](./fix_me.cpp#L28). Analizziamola meglio: come puoi vedere dall'esempio qui sotto, puoi già intravedere l'errore.

```cpp
void loadStatistics() {
    ifstream file("statistics.txt"); 
    if (file.is_open()) { 
        file << wins << draws << losses; 
        file.close();
    }
}
```

Con `ifstream` il programma **apre e legge un file**, però nella riga `file << wins << draws << losses;` c'è l'errore principale.

Quando usi questi operatori in C++:

- `<<` significa **output**
- `>>` significa **input**

Qui si crea il problema: stai dicendo a `ifstream`, che serve per fare **input**, di usare un operatore di **output**. Per correggere questo errore basta sostituire `<<` con `>>`.

---

Il secondo errore è sempre collegato alle funzioni di caricamento dati, ma questa volta riguarda le variabili.

```cpp
int wins = 0;
int losses = 0;
int draws = 0;
```

Per capire meglio, tieni aperto il file [`fix_me.cpp`](./fix_me.cpp). Se guardi bene, le tre variabili si trovano dentro il [`main()`](./fix_me.cpp#L70-74), e questo è un problema, perché nessuna funzione esterna al `main()` può accedere a quelle variabili.

Fai una prova: crea un piccolo programma con una funzione. All'interno della funzione crea una variabile e poi prova a stamparla con `cout` nel `main()`. Vedrai che il programma darà errore.

Se invece sposti quella variabile fuori dalla funzione, rendendola globale, sia la funzione che il `main()` potranno leggerla e modificarla.

</details>