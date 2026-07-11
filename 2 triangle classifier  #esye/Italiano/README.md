# Triangle Classifier

## **Introduzione e spiegazione:**
Questo programma funziona facendo inserire tre valori che rappresentano i lati di un triangolo.
Successivamente, tramite delle condizioni `if`, il programma determina il tipo di triangolo.

Questo esercizio serve per capire meglio come funzionano le condizioni.

Prova a sperimentare. Per esempio:

```cpp
if (!(var == 5))
```

Questa condizione **non significa**:

> Esegui se `var` è uguale a `5`

Il simbolo `!` inverte la condizione, quindi significa:

> Esegui se `var` è **diverso** da `5`

Prova a modificare le condizioni e osserva cosa cambia.
Usa [`fix_me.cpp`](./fix_me.cpp) per fare pratica con il debugging.

Se hai difficoltà consulta le soluzioni qui sotto, ma prima prova davvero a risolverlo da solo.

La programmazione spesso funziona così: provare, sbagliare, capire, migliorare e riprovare.

---

## **Soluzioni:**

<details>
<summary>Clicca per vedere le soluzioni</summary>

L'errore dentro [`fix_me.cpp`](./fix_me.cpp) è qui:

```cpp
else if (side1 == side2 && side3 == side2 && side3 != side1) {
    cout << "isoscele\n";
}
```

Il problema è che questa condizione controlla **solo uno dei possibili casi di triangolo isoscele**.

Funziona se:

- `side1 == side2`
- `side3` è diverso

Ma cosa succede se:

- `side1` è quello diverso?
- oppure `side2` è quello diverso?

quei casi vengono ignorati.

ci sono due modi per correggerlo.

### Soluzione 1 (consigliata)

Usare la logica più semplice presente in [`triangle-classifier.cpp`](./fix_me.cpp).

### Soluzione 2

Controllare tutte le possibili combinazioni di triangolo isoscele:

```cpp
else if (
    (side1 == side2 && side1 != side3) ||
    (side1 == side3 && side1 != side2) ||
    (side2 == side3 && side2 != side1)
) {
    cout << "isoscele\n";
}
```

Questa soluzione funziona correttamente, ma il codice diventa più lungo e meno leggibile.

</details>
