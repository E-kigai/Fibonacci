# Fibonacci Series in C

This is a simple C project that prints the Fibonacci sequence using two different methods:

- **Loop version**
- **Recursive version**

## Files

- `fibonacci.c` — Main file that handles user input and calls the chosen method.
- `fib_loop.c`, `fib_loop.h` — Contains the loop-based implementation.
- `fib_recursive.c`, `fib_recursive.h` — Contains the recursive implementation.

## 🧠 How It Works

When you run the program:

1. You enter how many Fibonacci numbers you want.
2. You choose which method to use:
   - **1** → Loop version
   - **2** → Recursive version
3. The program prints the Fibonacci series accordingly.

## ▶️ Build & Run

### Option 1: Manual compile (via terminal)
Make sure you're in the project folder, then run:

```bash
gcc fibonacci.c fib_loop.c fib_recursive.c -o fibonacci.exe
./fibonacci.exe


### Option 2: VS Code Task (Ctrl + Shift + B)

If you're using Visual Studio Code and have a `tasks.json` file set up:

1. Press `Ctrl + Shift + B`  
2. VS Code will automatically build the program using the configured task  
3. Then, you can run the program manually by executing:

   ```bash
   ./fibonacci.exe

### add this to the .vscode/tasks.json
{
  "version": "2.0.0",
  "tasks": [
    {
      "label": "Build Fibonacci",
      "type": "shell",
      "command": "gcc",
      "args": [
        "fibonacci.c",
        "fib_loop.c",
        "fib_recursive.c",
        "-o",
        "fibonacci.exe"
      ],
      "group": {
        "kind": "build",
        "isDefault": true
      },
      "problemMatcher": []
    }
  ]
}

