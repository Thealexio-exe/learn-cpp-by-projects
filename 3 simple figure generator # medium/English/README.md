# Simple figure generator

**Introduction**:

To understand this program, you need to know `for` loops and how they work.
As explained in the comments, the goal is to create geometric figures. For now it only creates a diamond or a triangle, but if you want, you can create a new program that makes even simpler shapes.

**Solutions**:

<details>
<summary>Click to see the solutions</summary>

To solve `fix_me.cpp`, you need to fix 3 problems, the first one is here:

```cpp
    for (int j = 0; j < 2 * i; j++) {
        cout << "*";
    }
```

> Simply **add** `-1`, so it becomes `j < 2 * i - 1`, because otherwise the result becomes even. Check the `first-figure-generator.cpp` file more carefully.

To complete the rest of the program, here is the correct result, then I will explain everything.

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

Let’s think for a moment: your goal is to create an upside-down triangle.

* The first space to fill is simply adding spaces, with a normal `for`.
* The second space to fill instead needs to decrease the number of `*`. How?

  * Basically it uses the same logic as `j < 2 * i - 1`
  * It adds `(giri-i)`, so it makes the number of `*` decrease

</details>