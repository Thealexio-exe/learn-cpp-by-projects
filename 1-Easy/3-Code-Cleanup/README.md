# Code-cleanup

<table>
    <tbody>
        <tr>
            <td>
            <strong>Tag:</strong>
            </td>
            <td>
                <img alt="syntax" src="https://img.shields.io/badge/-syntax-green">
                <img alt="function" src="https://img.shields.io/badge/-function-red">
            </td>
        </tr>
    </tbody>
</table>

Select the languages: [English](#english) | [Italiano](#italiano)

# English

## **Introduction and explanation**:

In this program there are no bugs, the goal is something else: learning how to make your program readable. This may seem like a simple thing, but it is essential, especially in the working world.

Now imagine creating a complex program without respecting good syntax. After a month, you come back to fix some bugs and realize that you no longer know where to put your hands. The program, because of the lack of good syntax, becomes hard to read and you will take twice as long to fix it.

My advice is this: first read the explanations below, then look at the file [`Code-cleanup.cpp`](./Code-cleanup.cpp) and finally try to correct the file [`fix_me.cpp`](./fix_me.cpp).

<details>
<summary>Click here for the explanations</summary>

Well, let’s begin. There are many small things that can help you write code with good syntax.

The first thing I recommend is to use the **`Enter`** key as much as possible. Why? The reason is very simple: leaving a space between two blocks of code makes you immediately understand that those two parts are not directly connected. I’ll leave you an example below:

```cpp
    cout << "Enter the first number: ";
    cin >> num_1;

    cout << "Enter the second number: ";
    cin >> num_2;
```

As you can see, this small space makes the program easier to read and also nicer to look at.

Small extra: if you notice carefully, in every `cout` there is a space at the end of the text. Try to always put it when the user must enter a value afterward or when you are going to print a variable, otherwise the text and the variable will stay attached.

Another tip is to give decent names to variables. As you can see in the file [`Code-cleanup.cpp`](./Code-cleanup.cpp), all the variables have an easy-to-understand name. If instead they were called `var1`, `var2`, `a`, `b`, etc., it would be much harder to understand what they are for. If a variable is called `somma`, it is quite obvious that it will contain the result of a sum.

The second-to-last tip I can give you is simple: when there are entire parts of code that perform a specific action, like functions or a chain of `if` statements, leave a comment above with a short explanation. That way you will immediately understand what that part of the code does without having to read it all again.

Finally, when you use `if`, `for`, etc., always try to make the conditions as readable as possible, especially when you have many nested `if`s or a long chain of conditions.

Also, in `if` statements there are some small shortcuts. For example, if there is only one instruction you can also avoid using braces `{}`:

```cpp
if (num == 5)
    cout << "number equal to 5";
```

Or you can write it all on one line:

```cpp
if (num == 5) { cout << "number equal to 5"; }
```

This can be a good way to write very short and specific conditions, but do not abuse it too much. In most cases it is better to go to a new line and always use braces, even if there is only one instruction.

</details>

## Solutions:

<details>
<summary>Click here for the solutions</summary>

This time the solutions are very short, because you only need to look at the file [`Code-cleanup.cpp`](./Code-cleanup.cpp) to see the result.

In short, the more your result is similar to that file, the better. A small note: if the names you gave to the variables are not identical but still make sense, that is perfectly fine. The important thing is to understand how useful it is to give variables clear names.

The same goes for the comments. If you want to add a few more comments or improve the file [`fix_me.cpp`](./fix_me.cpp), feel free to do it. Just remember to keep good syntax and write code that is easy to read.

</details> <br>

# Italiano

## **Introduzione e spiegazioni**:

In questo programma non ci sono bug, l'obiettivo è un altro: imparare a rendere leggibile il proprio programma. Questa può sembrare una cosa banale, ma è essenziale, soprattutto nel mondo del lavoro.

Ora immagina di creare un programma complesso senza rispettare una buona sintassi. Dopo un mese torni a correggere dei bug e ti rendi conto che non sai più dove mettere le mani. Il programma, a causa della mancanza di una buona sintassi, diventa difficile da leggere e ci metterai il doppio del tempo a sistemarlo.

Il mio consiglio è questo: leggi prima le spiegazioni qui sotto, poi guarda il file [`Code-cleanup.cpp`](./Code-cleanup.cpp) e infine prova a correggere il file [`fix_me.cpp`](./fix_me.cpp).

<details>
<summary>Clicka qui per le spiegazioni</summary>

Bene, iniziamo. Ci sono tante piccole cose che possono aiutarti a scrivere codice con una buona sintassi.

La prima cosa che ti consiglio è di usare il tasto **`Invio`** il più possibile. Perché? Il motivo è molto semplice: lasciare uno spazio tra due blocchi di codice ti fa capire subito che quelle due parti non sono direttamente collegate. Ti lascio un esempio qui sotto:

```cpp
    cout << "Inserisci il primo numero: ";
    cin >> num_1;

    cout << "Inserisci il secondo numero: ";
    cin >> num_2;
```

Come puoi notare, questo piccolo spazio rende il programma più facile da leggere e anche più piacevole da vedere.

Piccolo extra: se noti bene, in ogni `cout` c'è uno spazio alla fine del testo. Cerca di metterlo sempre quando dopo l'utente deve inserire un valore oppure quando andrai a stampare una variabile, altrimenti il testo e la variabile rimarranno attaccati.

Un altro consiglio è quello di dare dei nomi decenti alle variabili. Come puoi vedere nel file [`Code-cleanup.cpp`](./Code-cleanup.cpp), tutte le variabili hanno un nome facile da capire. Se invece si chiamassero `var1`, `var2`, `a`, `b`, ecc., sarebbe molto più difficile capire a cosa servono. Se una variabile si chiama `somma`, è abbastanza evidente che conterrà il risultato di una somma.

Il penultimo consiglio che posso darti è semplice: quando ci sono intere parti di codice che svolgono un'azione specifica, come funzioni o una serie di `if`, lascia un commento sopra con una breve spiegazione. In questo modo capirai subito cosa fa quella parte di codice senza doverla rileggere tutta.

Infine, quando utilizzi `if`, `for`, ecc., cerca sempre di rendere le condizioni il più leggibili possibile, soprattutto quando hai molti `if` annidati o una lunga catena di condizioni.

Inoltre, negli `if` esistono delle piccole scorciatoie. Per esempio, se c'è una sola istruzione puoi anche evitare di usare le graffe `{}`:

```cpp
if (num == 5)
    cout << "numero pari a 5";
```

Oppure puoi scriverlo tutto su una riga:

```cpp
if (num == 5) { cout << "numero pari a 5"; }
```

Può essere un buon modo per scrivere condizioni molto corte e particolari, ma non abusare troppo di questa possibilità. Nella maggior parte dei casi è meglio andare a capo e usare sempre le graffe, anche se c'è una sola istruzione.

</details>

## Soluzioni:

<details>
<summary>Clicka qui per le soluzioni</summary>

Questa volta le soluzioni sono molto corte, perché basta guardare il file [`Code-cleanup.cpp`](./Code-cleanup.cpp) per vedere il risultato.

In poche parole, più il tuo risultato è simile a quel file, meglio è. Una piccola precisazione: se i nomi che hai dato alle variabili non sono identici ma hanno comunque senso, va benissimo lo stesso. L'importante è capire quanto sia utile dare nomi chiari alle variabili.

Lo stesso vale per i commenti. Se vuoi aggiungere qualche commento in più o migliorare il file [`fix_me.cpp`](./fix_me.cpp), fallo pure. Ricordati solo di mantenere una buona sintassi e di scrivere un codice facile da leggere.

</details>
