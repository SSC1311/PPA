# PPA: Programming Placement Activity

> Core CS fundamentals through code. Focused programs in **C, C++ and Java**, organized by language and topic, with a clear commit history and regular updates.

![Languages](https://img.shields.io/badge/Languages-C%20%7C%20C%2B%2B%20%7C%20Java-blue)
![Focus](https://img.shields.io/badge/Focus-Fundamentals%20%7C%20OOP%20%7C%20DSA-green)
![Updates](https://img.shields.io/badge/Updates-Regular-brightgreen)

---

## At a Glance

| | |
|---|---|
| **Purpose** | Build and demonstrate strong programming fundamentals |
| **Languages** | C, C++ (C++17), Java |
| **Approach** | One concept per program, clean code, meaningful commits |
| **Cadence** | New programs pushed regularly |
| **Author** | Siddesh Choudhari, GenAI Engineering Intern (Voice AI, LLM pipelines) |

---

## Skills Demonstrated

| Area | What this repo shows |
|------|----------------------|
| **Memory management** | Stack vs heap, pointers, `malloc`/`free`, `new`/`delete`, dangling and null pointers, memory layout |
| **Systems fundamentals** | Compilation toolchain, preprocessor and macros, structure padding and alignment, file I/O |
| **Object-oriented design** | Encapsulation, inheritance, polymorphism, abstraction, interfaces |
| **Modern C++** | Templates, virtual functions, operator overloading, namespaces, references |
| **Java** | Collections, exception handling, multithreading, file handling, JDBC |
| **Problem solving** | Data structures and algorithms, with attention to time and space complexity |
| **CS foundations** | OS concepts (processes, threads), networking basics, SQL |

---

## Repository Structure

```
PPA/
├── C_Programming/        # Pointers, memory, structures, file handling
├── C++_Programming/      # OOP, templates, virtual functions
├── Java_Programming/     # Core Java, collections, concurrency, JDBC
├── .gitignore
└── README.md
```

Each program targets **one concept** and is named after it, so any file can be reviewed in a couple of minutes.

---

## Engineering Practices

- **Small, focused programs:** one idea per file, easy to read and review
- **Readable code:** meaningful names, consistent formatting, short comments explaining the approach
- **Complexity awareness:** time and space complexity noted for algorithmic programs
- **Clean history:** descriptive commit messages, for example `Add C pointer arithmetic examples`
- **Hygiene:** build artifacts are excluded through `.gitignore`

---

## Roadmap

Tracked openly so progress is easy to follow. Items are ticked once the code is in the repo.

**C**
- [ ] Arrays, strings and string functions
- [ ] Pointers and pointer arithmetic
- [ ] Dynamic memory allocation (1D, 2D)
- [ ] Structures, unions and enums
- [ ] File handling

**C++**
- [ ] Classes, constructors and destructors
- [ ] Inheritance and polymorphism
- [ ] Operator overloading
- [ ] Templates and virtual functions

**Java**
- [ ] OOP fundamentals and interfaces
- [ ] Collections framework
- [ ] Exception handling
- [ ] Multithreading
- [ ] JDBC basics

**Data Structures and Algorithms**
- [ ] Linked lists, stacks and queues
- [ ] Sorting and searching
- [ ] Trees and graphs (basics)

---

## Activity Log

| Date | Language | Topic | Files |
|------|----------|-------|-------|
| 2026-10-12 | C | Addresses, 1D arrays, array-pointer relationship and pointer arithmetic | `C_Programming/Address.c`, `ArrayDemo1-5.c`, `ArrayPointer.c`, `ArrayPointerArithmetic.c` |
| 2026-10-15 | C | Functions, modifiers and pointer arithmetic | `C_Programming/FunctionDemo1-6.c`, `Modifier.c`, `PointerArithmetic1.c` |

*A new row is added with each push.*

---

## Running the Code

```bash
# C
gcc file.c -o file && ./file

# C++ (C++17)
g++ -std=c++17 file.cpp -o file && ./file

# Java
javac File.java && java File
```

**Requirements:** GCC/G++ (C++17 support) and JDK 11 or later.

---

## About

I'm a Computer Engineering student and GenAI Engineering Intern working on Voice AI systems and LLM pipelines. This repository is where I keep my fundamentals sharp: memory, OOP, and data structures, the foundations that production systems are built on.

**Connect:** [LinkedIn](https://linkedin.com/in/siddesh-choudhari-ssc1311) · [GitHub](https://github.com/SSC1311)

---

*Feedback and suggestions are welcome through issues.*
