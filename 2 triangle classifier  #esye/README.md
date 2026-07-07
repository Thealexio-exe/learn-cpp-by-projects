# Triangle Classifier

## English

**Introduction and explanation:**
This program works by asking the user to enter three values that represent the sides of a triangle.
Then, using `if` conditions, the program determines which type of triangle it is.

This exercise is made to help you understand how conditions work.

Try experimenting with conditions. For example:

```cpp
if (!(var == 5))
```

This does **not** mean:

> Execute if `var` equals `5`

The `!` operator reverses the condition, so it means:

> Execute if `var` is **NOT** equal to `5`

Try changing conditions and experimenting with values.
Use `fix_me.cpp` to practice debugging.

If you get stuck, check the solutions below — but try solving it first.

Programming often works like this: test, fail, understand, improve, and try again.

---

**Solutions:**

<details>
<summary>Click to show solutions</summary>

The error inside `fix_me.cpp` is here:

```cpp
else if (side1 == side2 && side3 == side2 && side3 != side1) {
    cout << "isosceles\n";
}
```

The problem is that this condition only checks **one possible isosceles case**.

It works if:

* `side1 == side2`
* `side3` is different

But what if:

* `side1` is different?
* or `side2` is different?

Those cases are ignored.

There are two ways to solve this.

### Solution 1 (recommended)

Use the simpler logic from `triangle-classifier.cpp`.

### Solution 2

Check every possible isosceles combination:

```cpp
else if (
    (side1 == side2 && side1 != side3) ||
    (side1 == side3 && side1 != side2) ||
    (side2 == side3 && side2 != side1)
) {
    cout << "isosceles\n";
}
```

This solution works correctly but becomes longer and harder to read.

</details>

---

## Italiano

**Introduzione e spiegazione:**
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
Usa `fix_me.cpp` per fare pratica con il debugging.

Se hai difficoltà consulta le soluzioni qui sotto, ma prima prova davvero a risolverlo da solo.

La programmazione spesso funziona così: provare, sbagliare, capire, migliorare e riprovare.

---

**Soluzioni:**

<details>
<summary>Clicca per vedere le soluzioni</summary>

L'errore dentro `fix_me.cpp` è qui:

```cpp
else if (side1 == side2 && side3 == side2 && side3 != side1) {
    cout << "isoscele\n";
}
```

Il problema è che questa condizione controlla **solo uno dei possibili casi di triangolo isoscele**.

Funziona se:

* `side1 == side2`
* `side3` è diverso

Ma cosa succede se:

* `side1` è quello diverso?
* oppure `side2` è quello diverso?

Quei casi vengono ignorati.

Ci sono due modi per correggerlo.

### Soluzione 1 (consigliata)

Usare la logica più semplice presente in `triangle-classifier.cpp`.

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
