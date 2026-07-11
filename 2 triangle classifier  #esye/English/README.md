# Triangle Classifier

## **Introduction and explanation:**
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
Use [`fix_me.cpp`](./fix_me.cpp) to practice debugging.

If you get stuck, check the solutions below — but try solving it first.

Programming often works like this: test, fail, understand, improve, and try again.

---

## **Solutions:**

<details>
<summary>Click to show solutions</summary>

The error inside [`fix_me.cpp`](./fix_me.cpp) is here:

```cpp
else if (side1 == side2 && side3 == side2 && side3 != side1) {
    cout << "isosceles\n";
}
```

The problem is that this condition only checks **one possible isosceles case**.

It works if:

- `side1 == side2`
- `side3` is different

But what if:

- `side1` is different?
- or `side2` is different?

those cases are ignored.

there are two ways to solve this.

### Solution 1 (recommended)

Use the simpler logic from [`triangle-classifier.cpp`](./fix_me.cpp).

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