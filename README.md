# CLI Calculator in C

A simple and extendable command-line calculator written in C. Designed for Linux/WSL environments using modular code and a Makefile build system.

## 🧠 Features

- ✅ Basic arithmetic: add, sub, mul, div, mod, pow, sqrt
- ✅ Extended math: factorial, Fibonacci, GCD, LCM
- ✅ Command history: view and clear previous commands
- ✅ Modular structure: separate .c/.h files for logic, math, history
- ✅ Clean Makefile: easy build, clean targets
- ✅ Works in Linux terminal / WSL / Unix

## 🛠 Build and Run

```bash
make
./calc
```

To clean build artifacts:

```bash
make clean
```

## 🧪 Example

```
> add 3 5
= 8
> fib 6
= 8
> gcd 18 24
= 6
> history
1: add 3 5 = 8
2: fib 6 = 8
3: gcd 18 24 = 6
```

## 📁 File Structure

```
project/
├── src/
│   ├── main.c
│   ├── calculator.c
│   ├── advanced_math.c
│   └── history.c
├── include/
│   ├── calculator.h
│   ├── advanced_math.h
│   └── history.h
├── Makefile
└── README.md
```
