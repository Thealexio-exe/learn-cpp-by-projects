# **Contributing**

If you want to contribute to this project, it would help me a lot. I have left a complete guide below with the various standards to follow.<br>
Before continuing, keep in mind that you can contribute either by improving the current projects, fixing bugs, typos, errors, etc., or by adding a new project. For this part, I have left the complete procedure below.

## Adding a new project

If you want to add a new project, follow these steps:

- Create a folder with the name of the exercise, for example `if-conditions`, `vector-exe`.
- Create a `file.cpp` containing your program + comments to explain how the various parts work.
- Create a `fix_me.cpp` containing your program with logical bugs (preferably).
- (optional) Create a `README.md` file containing an explanation of the exercise and, in addition, how to solve the `fix_me.cpp`, example [`README`](./3-Hard/1-Rock-Paper-Scissors/README.md).
- I can also take care of the latter, but it will take more time.
- Finally, choose the difficulty of the exercise, whether to put it in Easy, Medium, or Hard.

## How to contribute

If you don't know how to contribute on GitHub, you have two choices: either install [`GitHub Desktop`](https://desktop.github.com/download/) or you can use the slightly more complex version, using [`Git`](https://git-scm.com/install/). Depending on what you use, I have left two different guides.

<details>
<summary>Click here to see the GitHub Desktop version</summary>

1. **Fork the repository**

First, open the repository on GitHub.<br>
Click the Fork button in the top-right corner and create a fork under your own GitHub account.<br>
Your fork will be a copy of the repository that you can modify without needing direct access to the original repository.

2. **Clone your fork**

Open GitHub Desktop and select:

> File → Clone repository

Select the GitHub.com tab and find your fork of learn-cpp-by-projects.<br>
Choose where you want to save the repository on your PC and click Clone.

3. **Create a new branch**

Before making any changes, create a new branch.<br>
In GitHub Desktop, click the Current Branch button and select New Branch.<br>
Give your branch a descriptive name, for example: `add-my-project`, then click Create Branch.

4. **Add your changes**

Now open the repository folder on your PC and add or modify the files you want to contribute.<br>
For example, if you are adding a new project, create the folder and files following the structure explained above.<br>
When you are finished, return to GitHub Desktop and will automatically detect the changes you made.

5. **Commit your changes**

In GitHub Desktop, you will see all the files you changed.<br>
Write a short description of your changes in the Summary field, for example: Add my new project<br>
Then click Commit to `add-my-project`

6. **Push your branch**

Click Publish branch at the top of GitHub Desktop.
This will upload your branch and your changes to your GitHub fork.

7. **Create a Pull Request**

After publishing your branch, GitHub Desktop should show a Create Pull Request button, click it and GitHub will open the Pull Request page in your browser.<br>
Make sure that the Pull Request is going:

```text
your-username/learn-cpp-by-projects
                ↓
Thealexio-exe/learn-cpp-by-projects
```

Add a short description explaining what you changed and why.<br>
Finally, click Create Pull Request.

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
