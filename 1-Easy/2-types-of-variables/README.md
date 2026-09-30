# Types of variables

<table>
    <tbody>
        <tr>
            <td>
            <strong>Tag:</strong>
            </td>
            <td>
                <img alt="variables" src="https://img.shields.io/badge/-variables-green">
                <img alt="string-lib" src="https://img.shields.io/badge/-string-green">
            </td>
        </tr>
    </tbody>
</table>

Select the languages: [English](#english) | [Italiano](#italiano)

# English

## **Introduction and explanation:**

In this program I have listed most of the variable types with examples. I had already introduced how variables work in the *file* [`Hello_world.cpp`](https://github.com/Thealexio-exe/learn-cpp-by-projects/blob/main/1-Easy/1-Hello-world/Hello_world.cpp). There are some variable types that I chose to omit, for example `long` or `signed/unsigned`, which are more complex concepts to learn and are used in more specific contexts.

## **Solutions:**

<details>
<summary>Click here to see the solutions</summary>

The first error in this program is found in the *decimal* variables:

```cpp
double var_double = 2,71828; --> double var_double = 2.71828;
```

As you can see, I have already corrected the exercise. The error itself is simple: you should not use the `,` but the `.` for decimal numbers. <br>

The second one is found in the *bool* variables:

```cpp
bool var_bool = 1; --> bool var_bool = false;
```

The error is simple: variables of type *bool* can only have two values, `true` and `false`.

The last errors are found in the *char* and *string* variables:

```cpp
char var_char = "A"; --> char var_char = 'A';
string var_string = 'Hi world'; --> string var_string = "Hi world";
```

The error is simple: for variables of type *char*, single quotes `'` are used, while for *string* types, quotation marks `"` are used. This is because `char` is used to contain a single character, while `string` can contain multiple characters, such as a word or an entire sentence.

</details>

<br>

# Italiano

## **Introduzione e spiegazione:**

In questo programma ho elencato la maggior parte delle tipologie di variabili con degli esempi. Avevo già introdotto il funzionamento delle variabili nel *file* [`Hello_world.cpp`](https://github.com/Thealexio-exe/learn-cpp-by-projects/blob/main/1-Easy/1-Hello-world/Hello_world.cpp). Ci sono alcuni tipi di variabili che ho voluto omettere, per esempio `long` o `signed/unsigned`, che sono concetti più complessi da imparare e vengono utilizzati in ambiti più specifici.

## **Soluzioni:**

<details>
<summary>Clicca per vedere le soluzioni</summary>

Il primo errore in questo programma si trova nelle variabili di tipo *decimale*:

```cpp
double var_double = 2,71828; --> double var_double = 2.71828;
```

Come puoi notare, ho già corretto l'esercizio. L'errore in sé è semplice: non bisogna usare la `,` ma il `.` per i numeri decimali. <br>

Il secondo invece si trova nelle variabili di tipo *bool*:

```cpp
bool var_bool = 1; --> bool var_bool = false;
```

L'errore è semplice: le variabili di tipo *bool* possono assumere solo due valori, `true` e `false`.

Gli ultimi errori si trovano nelle variabili di tipo *char* e *string*:

```cpp
char var_char = "A"; --> char var_char = 'A';
string var_string = 'Hi world'; --> string var_string = "Hi world";
```

L'errore è semplice: per le variabili di tipo *char* si usano gli apici singoli `'`, mentre per i tipi *string* si usano le virgolette `"`. Questo perché `char` viene utilizzato per contenere un singolo carattere, mentre `string` può contenere più caratteri, come una parola o un'intera frase.

</details>