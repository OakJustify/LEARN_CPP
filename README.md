# C++ Learning Journey 🚀

Welcome to my C++ learning repository! This repository serves as a structured code archive and personal learning journal for mastering C++ programming, memory management, and Object-Oriented Programming (OOP) concepts — ranging from fundamental syntax to advanced practices and weekly lab assignments.

---

## 📌 Table of Contents

- [About the Repository](#-about-the-repository)
- [Prerequisites & Tech Stack](#-prerequisites--tech-stack)
- [Repository Structure](#-repository-structure)
- [Modules & Practice Tracks](#-modules--practice-tracks)
- [Roadmap](#-roadmap)
- [How to Compile & Run](#-how-to-compile--run)
- [Known Issues & Notes](#-known-issues--notes)
- [License](#-license)

---

## 📖 About the Repository

This repository documents my step-by-step progress in learning C++. It contains hands-on practice problems, weekly university practicum assignments, and mini-projects focused on writing efficient, modern C++ while understanding the low-level memory model and OOP design patterns.

Every module is intentionally small and self-contained so each topic can be compiled, run, and debugged in isolation.

---

## 🛠️ Prerequisites & Tech Stack

To build and execute the code in this repository, ensure you have the following installed:

- **Compiler:** `g++` (GCC) or `clang++` (Clang) — supporting C++17 / C++20
- **Build System:** `CMake` (>= 3.10) or `Make` *(for multi-file projects)*
- **Debugger:** `GDB` or `LLDB`
- **Editor / IDE:** VSCodium / VS Code (with the `clangd` extension) or JetBrains CLion
- **Version Control:** Git & GitHub CLI (`gh`)

Check your compiler version:

```bash
g++ --version
```

---

## 📁 Repository Structure

```text
.
├── 1_Plusify/               # Interactive calculator practice module
│   └── plusify.cpp          # Entry point: std::cin/std::cout, loops, conditionals
├── .gitignore               # Ignores compiled binaries (*.out, plusify, a.out)
└── README.md                # Repository documentation
```

> Naming convention: `1_Plusify` — the number is the module order, followed by the module name.

---

## 📚 Modules & Practice Tracks

### 1_Plusify

A small interactive calculator used as a warm-up exercise. It covers the very basics of C++ in a single file.

- **Topics:** `main()` return codes, standard I/O (`std::cin` / `std::cout`), `while` loops, `if` / `else if` chains, global vs. local variables, `std::string` comparison.
- **Input format:** `number` → `operator` → `number`
- **Supported operators:** `+`, `-`, `*`, `/`

```text
Welcome to Plusify, your lightweight calculator!
Type number: 12
Type operator (+ - * /): +
Type number: 30
Hasil: 42
```

---

## 🗺️ Roadmap

Planned weekly practicum topics, to be implemented under `00_Practice/`:

- **Week 1 —** Basic syntax, control flow (`if-else`, `switch`, loops), and standard I/O.
- **Week 2 —** Functions, pass-by-value vs. pass-by-reference, pointers, and dynamic memory (`new` / `delete`).
- **Week 3 —** Classes, objects, member functions, constructors, and destructors.
- **Week 4 —** Inheritance hierarchies, access specifiers (`public`, `protected`, `private`), and method overriding.
- **Week 5 —** Virtual functions, abstract classes, and runtime polymorphism.
- **Week 6 —** Operator overloading, copy constructors, and friend classes/functions.
- **Week 7 —** Templates, the Standard Template Library (STL), and exception handling (`try-catch`).

---

## 💻 How to Compile & Run

### Option 1: Direct compilation with `g++`

1. **Clone the repository:**

```bash
git clone https://github.com/OakJustify/LEARN_CPP.git
cd LEARN_CPP
```

2. **Navigate to the target module:**

```bash
cd 1_Plusify
```

3. **Compile and run:**

```bash
g++ -std=c++17 -Wall -Wextra plusify.cpp -o plusify
./plusify
```

> The compiled binary (`plusify`) is already covered by `.gitignore`, so it will never be committed.

---

### Option 2: Build with CMake *(for multi-file projects)*

1. **Navigate to a module directory containing a `CMakeLists.txt`:**

```bash
cd 00_Practice/Week1
```

2. **Configure and compile:**

```bash
cmake -B build
cmake --build build
```

3. **Run the executable:**

```bash
./build/Week1
```

---

### Option 3: Debugging

```bash
g++ -std=c++17 -g plusify.cpp -o plusify
gdb ./plusify
```

Inside GDB: `start` → `next` / `step` → `print hasil` → `continue` → `quit`.

---

## 🐛 Known Issues & Notes

Tracked issues in `1_Plusify/plusify.cpp`, kept as learning material:

- **Division by zero** — entering `/` with a second operand of `0` causes undefined behavior.
- **Uninitialized result** — an invalid operator (e.g. `%`) leaves `hasil` holding a stale value from the previous iteration.
- **No exit condition** — the `while (true)` loop has no way to quit, making the `return 0;` statement unreachable.

Fixes will be applied in a later module as part of the input-validation and error-handling exercises.

---

## 📜 License

This repository is intended to be open-source and released under the [MIT License](https://opensource.org/licenses/MIT). Feel free to explore, fork, and use the examples for learning purposes!
