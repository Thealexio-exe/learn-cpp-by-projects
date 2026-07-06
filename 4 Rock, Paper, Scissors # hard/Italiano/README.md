# Sasso carta forbici

## Introduzione:

Questa volta ho fatto 2 versioni del file `game1.cpp` e `game2.cpp`.

Nel primo viene spiegato semplicemente come creare e come funziona Sasso Carta Forbici in C++, attraverso funzioni, string e numeri casuali. Successivamente, nel secondo, sono state aggiunte due funzioni per manipolare file `.txt` e salvare le variabili al di fuori del programma.

Ti lascio anche alcuni link alla documentazione online:

- <a href="https://www.w3schools.com/cpp/cpp_strings.asp">Libreria string</a>
- <a href="https://www.w3schools.com/cpp/cpp_howto_random_number.asp">Libreria cstdlib</a>
- <a href="https://www.w3schools.com/cpp/ref_ctime_time.asp">Libreria ctime</a>
- <a href="https://www.w3schools.com/cpp/cpp_ref_fstream.asp">Libreria fstream</a>

## Soluzioni:

Qui ti lascio subito le soluzioni del file `fix_me.cpp`. Le ho divise in **Soluzioni 1** (più facili) e **Soluzioni 2** (più difficili).

<details>
<summary>Soluzioni 1</summary>

Okey, ragioniamo insieme passo passo. Il primo errore si trova nelle funzioni `void Scelta_pc()` e `void logica()`.

In queste due funzioni viene usato il valore `void`, ma `void` significa “nulla”. Proprio dal suo significato si può capire qual è l’errore: la funzione non restituisce niente.
Per correggere l’errore basta sostituire `void` con `string`, perché noi vogliamo che come risultato venga restituito del testo.

Per essere sicuro che tu capisca meglio, ecco un esempio di due funzioni `void` e di una funzione `int`:

```cpp
void Scrivi_il_nome(int tot, string nome) {

    for (int i = 0; i <= tot; i++) {
        cout << nome << endl;
    }

}
```

> Qui la funzione manda a schermo un valore di testo per un certo numero di volte, ma non va a modificare variabili e non restituisce nessun valore.
> In poche parole, con `void` puoi usare una funzione se ti serve solo eseguire del codice.

```cpp
int Somma(int a, int b) {

    int somma = a + b;
    cout << "La somma è uguale a: " << somma << endl;

    return somma;
}
```

> Qui invece il programma, oltre a fare delle operazioni, restituisce un valore `int`, cioè la variabile `somma`.

---

Il secondo errore, e anche quello segreto, si trova sempre in `void Scelta_pc()`:

* il primo è che `srand(time(NULL))` manca di un `;`, quindi è un errore banale ma comune;
* il secondo si trova in `int random = rand()%2;`.
  In informatica si parte sempre da `0` quando si conta, e proprio per questo non potrà mai uscire `forbici` come opzione. Per sistemare questo errore cambia `rand()%2;` con questa versione: `rand()%3;`

</details>

<details>
<summary>Soluzioni 2</summary>

Ora guardiamo meglio gli errori presenti.

Il primo errore si trova nella funzione `caricaStatistiche()`. Analizziamola meglio: come puoi vedere dall'esempio qui sotto, puoi già intravedere l'errore.

```cpp
void caricaStatistiche() {
    ifstream file("statistiche.txt"); 
    if (file.is_open()) { 
        file << vittorie << pareggi << sconfitte; 
        file.close();
    }
}
```

Con `ifstream` il programma **apre e legge un file**, però nella riga `file << vittorie << pareggi << sconfitte;` c'è l'errore principale.

Quando usi questi operatori in C++:

* `<<` significa **output**
* `>>` significa **input**

Qui si crea il problema: stai dicendo a `ifstream`, che serve per fare **input**, di usare un operatore di **output**. Per correggere questo errore basta sostituire `<<` con `>>`.

---

Il secondo errore è sempre collegato alle funzioni di caricamento dati, ma questa volta riguarda le variabili.

```cpp
int vittorie = 0;
int sconfitte = 0;
int pareggi = 0;
```

Per capire meglio, tieni aperto il file `fix_me.cpp`. Se guardi bene, le tre variabili si trovano dentro il `main()`, e questo è un problema, perché nessuna funzione esterna al `main()` può accedere a quelle variabili.

Fai una prova: crea un piccolo programma con una funzione. All'interno della funzione crea una variabile e poi prova a stamparla con `cout` nel `main()`. Vedrai che il programma darà errore.

Se invece sposti quella variabile fuori dalla funzione, rendendola globale, sia la funzione che il `main()` potranno leggerla e modificarla.

</details>