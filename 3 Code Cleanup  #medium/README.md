# Code-cleanup

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
    cin >> numero_1;

    cout << "Enter the second number: ";
    cin >> numero_2;
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

</details>