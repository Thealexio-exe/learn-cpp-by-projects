# **Contributing**

If you want to contribute to this project, it would help me a lot. I have left a complete guide below with the various standards to follow.<br>
Before continuing, keep in mind that you can contribute either by improving the current projects, fixing bugs, typos, errors, etc., or by adding a new project. For this part, I have left the complete procedure below.

## Adding a new project

If you want to add a new project, follow these steps:

* Create a folder with the name of the exercise, for example `if-conditions`, `vector-exe`.

* Create a `file.cpp` containing your program + comments to explain how the various parts work.

* Create a `fix_me.cpp` containing your program with logical bugs (preferably).

* (optional) Create a `README.md` file containing an explanation of the exercise and, in addition, how to solve the `fix_me.cpp`, example [`README`](./3-Hard/1-Rock-Paper-Scissors/README.md).

* I can also take care of the latter, but it will take more time.

* Finally, choose the difficulty of the exercise, whether to put it in Easy, Medium, or Hard.

## How to contribute

If you don't know how to contribute on GitHub, you have two choices: either install [`GitHub Desktop`](https://desktop.github.com/download/) or you can use the slightly more complex version, using [`Git`](https://git-scm.com/install/). Depending on what you use, I have left two different guides.

<details>

<summary>Click here to see the GitHub Desktop version</summary>

// sorry, I'm working on it

</details>

<details>

<summary>Click here to see the Git version</summary>

To contribute, you need to have Git installed. Afterwards, copy and paste these commands.

This creates a clone of the repository on your PC, so you can add your files.

```bash
git clone https://github.com/Thealexio-exe/learn-cpp-by-projects.git
```

This tells Git that you are working in this folder.

```bash
cd learn-cpp-by-projects
```

Before making changes:

```bash
git checkout -b add-my-project
```

After you have added your project, run these commands to send me a change proposal:

```bash
git add .
```

```bash
git commit -m "Add my new project"
```

```bash
git push -u origin add-my-project
```

</details>
