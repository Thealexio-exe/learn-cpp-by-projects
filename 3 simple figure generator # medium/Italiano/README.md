# Simple figure generator

**Introduzione**:

Per capire questo programma devi conoscere i `for` e il loro utilizzo.
Come spiegato nei commenti, il funzionamento è creare figure geometriche. Per ora crea solo un rombo o un triangolo, ma se vuoi puoi creare un nuovo programma che faccia figure anche più semplici.

**Soluzioni**:

<details>
<summary>Clicca per vedere le soluzioni</summary>

Per risolvere `fix_me.cpp` devi risolvere 3 problemi, il primo si trova qui:

```cpp
    for (int j = 0; j < 2 * i; j++) {
        cout << "*";
    }
```

> Semplicemente devi **aggiungere** `-1`, quindi `j < 2 * i - 1`, perché altrimenti il risultato torna pari. Controlla meglio il file `first-figure-generator.cpp`.

Per completare il resto del programma, ecco il risultato corretto, poi ti spiego tutto.

```cpp
    for (int i = 0; i <= giri; i++) {

        for (int c = 0; c < i; c++) {
            cout << " ";
        }
        for (int c = 0; c < 2*(giri-i)-1; c++) {
            cout << "*";
        }
        
        cout << endl;
    } 
```

Ragioniamo un attimo: il tuo obiettivo è creare un triangolo al contrario.

* Il primo spazio da riempire è semplicemente aggiungere spazi, con un normale `for`.
* Il secondo spazio da riempire invece serve a diminuire il numero di `*`. Come?

  * Di base usa la stessa logica di `j < 2 * i - 1`
  * Aggiunge `(giri-i)`, così fa diminuire il numero di `*`

</details>
