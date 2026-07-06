# Sasso carta forbici

## Introduzione:
Questa volta ho fatto 2 versioni del file `game1.cpp`e `game2.cpp`, nel primo spiega semplicemente come creare e come funziona sasso carta farboci su cpp, attraverso funzioni, string e numeri casuali, succesivamente nel secondo sono state aggiunte due funzioni per manipolare file.txt e salvare le variabili al difuori del programma 

## Soluzioni:
Qui ti lascio subito le soluzioni del file `fix_me.cpp` le ho divise in soluzioni 1 (più facili) e soluzioni 2 (più difficili)

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

- il primo è che `srand(time(NULL))` manca di un `;`, quindi è un errore banale ma comune;
- il secondo si trova in `int random = rand()%3;`.
  In informatica si parte sempre da `0` quando si conta, e proprio per questo non potrà mai uscire `forbici` come opzione. Per sistemare questo errore cambia `rand()%3;` con una di queste versioni:

  - `rand()%4;`
  - `rand()%3+1;`
</details>


<details>
<summary>soluzioni 2</summary>

Ora gurdiamo meglio gli errori presenti:

Il primo errore si trova nella funzione `void caricaStatistiche()`, Analiziamola meglio, come vede dall'esempio qui sotto puoi gia intravedere l'errore.

```cpp
void caricaStatistiche() {
    ifstream file("statistiche.txt"); 
    if (file.is_open()) { 
        file << vittorie << pareggi << sconfitte; 
        file.close();
    }
}
```

In ifstream il programma **legge e apre il file**, però nella linea `file << vittorie << pareggi << sconfitte;` c'è la l'errore principale, quando usi `<<` in c++ hanno un significato:
- `<<` significa **output**
- `>>` significa **input**

e qui si crea il problema principale, tu stai diceno a `ifstream` che è un **input** di darli un **output**, questo è un errore di sintassi.

---

Il secondo errore è sempre collegato alle 



</details>
