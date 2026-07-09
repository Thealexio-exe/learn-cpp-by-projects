# Code-cleanup

## **Introduzione e spiegazioni**:

In questo programma non ci sono bug, l'obiettivo è un altro: imparare a rendere leggibile il proprio programma. Questa può sembrare una cosa banale, ma è essenziale, soprattutto nel mondo del lavoro.

Ora immagina di creare un programma complesso senza rispettare una buona sintassi. Dopo un mese torni a correggere dei bug e ti rendi conto che non sai più dove mettere le mani. Il programma, a causa della mancanza di una buona sintassi, diventa difficile da leggere e ci metterai il doppio del tempo a sistemarlo.

Il mio consiglio è questo: leggi prima le spiegazioni qui sotto, poi guarda il file `Code-cleanup.cpp` e infine prova a correggere il file `fix_me.cpp`.

<details>
<summary>Clicka qui per le spiegazioni</summary>

Bene, iniziamo. Ci sono tante piccole cose che possono aiutarti a scrivere codice con una buona sintassi.

La prima cosa che ti consiglio è di usare il tasto **`Invio`** il più possibile. Perché? Il motivo è molto semplice: lasciare uno spazio tra due blocchi di codice ti fa capire subito che quelle due parti non sono direttamente collegate. Ti lascio un esempio qui sotto:

```cpp
    cout << "Inserisci il primo numero: ";
    cin >> numero_1;

    cout << "Inserisci il secondo numero: ";
    cin >> numero_2;
```

Come puoi notare, questo piccolo spazio rende il programma più facile da leggere e anche più piacevole da vedere.

Piccolo extra: se noti bene, in ogni `cout` c'è uno spazio alla fine del testo. Cerca di metterlo sempre quando dopo l'utente deve inserire un valore oppure quando andrai a stampare una variabile, altrimenti il testo e la variabile rimarranno attaccati.

Un altro consiglio è quello di dare dei nomi decenti alle variabili. Come puoi vedere nel file `Code-cleanup.cpp`, tutte le variabili hanno un nome facile da capire. Se invece si chiamassero `var1`, `var2`, `a`, `b`, ecc., sarebbe molto più difficile capire a cosa servono. Se una variabile si chiama `somma`, è abbastanza evidente che conterrà il risultato di una somma.

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

Questa volta le soluzioni sono molto corte, perché basta guardare il file `Code-cleanup.cpp` per vedere il risultato.

In poche parole, più il tuo risultato è simile a quel file, meglio è. Una piccola precisazione: se i nomi che hai dato alle variabili non sono identici ma hanno comunque senso, va benissimo lo stesso. L'importante è capire quanto sia utile dare nomi chiari alle variabili.

Lo stesso vale per i commenti. Se vuoi aggiungere qualche commento in più o migliorare il file `fix_me.cpp`, fallo pure. Ricordati solo di mantenere una buona sintassi e di scrivere un codice facile da leggere.

</details>
