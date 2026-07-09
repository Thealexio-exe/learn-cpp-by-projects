# Rock Paper Scissors

## Introduction:

This time I created 2 versions of the file [`game1.cpp`](./game1.cpp) and [`game2.cpp`](./game2.cpp).

In the first one, it is simply explained how to create and how Rock Paper Scissors works in C++, using functions, strings and random numbers. Subsequently, in the second one, two functions were added to manipulate `.txt` files and save variables outside the program.

I also leave you some links to online documentation:

* <a href="https://www.w3schools.com/cpp/cpp_functions.asp">Functions study</a>
* <a href="https://www.w3schools.com/cpp/cpp_strings.asp">String library</a>
* <a href="https://www.w3schools.com/cpp/cpp_howto_random_number.asp">cstdlib library</a>
* <a href="https://www.w3schools.com/cpp/ref_ctime_time.asp">ctime library</a>
* <a href="https://www.w3schools.com/cpp/cpp_ref_fstream.asp">fstream library</a>

## Solutions:

Here are the solutions for the [`fix_me.cpp`](./fix_me.cpp) file. They are divided into **Solutions 1** (easier) and **Solutions 2** (harder).

<details>
<summary>Solutions 1</summary>

Okey, let’s reason step by step. The first error is in the functions [`void Scelta_pc()`](./fix_me.cpp#L44) and [`void logica()`](./fix_me.cpp#L53).

In these two functions the type `void` is used, but `void` means “nothing”. From its meaning you can already understand the mistake: the function does not return anything.
To fix this error you just need to replace `void` with `string`, because we want the function to return text as a result.

To make it clearer, here is an example of a `void` function and an `int` function:

```cpp
void Scrivi_il_nome(int tot, string nome) {

    for (int i = 0; i <= tot; i++) {
        cout << nome << endl;
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

The second error, which is also the hidden one, is still in [`void Scelta_pc()`](./fix_me.cpp#L44):

* the first is that [`srand(time(NULL))`](./fix_me.cpp#L45) is missing a `;`, which is a simple but common mistake;
* the second is in [`int random = rand()%2;`](./fix_me.cpp#L46).
  In programming we always start counting from `0`, and because of this, `scissors` can never be selected. To fix this error, change `rand()%2;` to this version: `rand()%3;`

</details>

<details>
<summary>Solutions 2</summary>

Now let’s look more closely at the errors.

The first error is in the function [`caricaStatistiche()`](./fix_me.cpp#L28). Let’s analyze it: as you can see in the example below, the mistake is already visible.

```cpp
void caricaStatistiche() {
    ifstream file("statistiche.txt"); 
    if (file.is_open()) { 
        file << vittorie << pareggi << sconfitte; 
        file.close();
    }
}
```

With `ifstream` the program **opens and reads a file**, but in the line `file << vittorie << pareggi << sconfitte;` there is the main error.

In C++ these operators mean:

* `<<` means **output**
* `>>` means **input**

Here the problem appears: you are telling `ifstream`, which is used for **input**, to use an **output operator**. To fix this error you simply need to replace `<<` with `>>`.

---

The second error is also related to the loading functions, but this time it concerns variables.

```cpp
int vittorie = 0;
int sconfitte = 0;
int pareggi = 0;
```

To understand better, keep the [`fix_me.cpp`](./fix_me.cpp) file open. If you look closely, the three variables are inside the [`main()`](./fix_me.cpp#L70-74), and this is a problem because no function outside `main()` can access them.

Try this: create a small program with a function. Inside the function define a variable and then try to print it with `cout` in `main()`. You will see that it will give an error.

If instead you move the variable outside the function, making it global, both the function and `main()` will be able to read and modify it.

</details>
