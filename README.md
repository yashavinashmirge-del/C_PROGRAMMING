
# C Programming

A collection of C programs I've written while learning and practicing the language — covering core concepts, problem-solving exercises, and topic-wise practice.

## About

This repo is basically my personal record of learning C. It started as a way to practice basic syntax and has grown into a set of programs covering loops, functions, arrays, pointers, and strings and many more yet to cover . Some programs revisit the same problem multiple times as I learned better or more efficient ways to solve it — I've kept those instead of deleting them, since they show the progression.

It's not meant to be a polished library — just genuine practice work, organized so it's easy for me (or anyone else) to look back through.

## Structure

```
C_PROGRAMMING/
├── CONCEPTS_CODES/     Programs focused on specific C concepts
├── CP_CODES/            Problem-solving style programs
├── PRACTICE_CODES/      Regular practice exercises, grouped by topic
└── README.md
```

**CONCEPTS_CODES** — programs written to understand a specific concept in isolation.

**CP_CODES** — a numbered set of problems, ranging from simple arithmetic and loops to arrays, pointers, and string handling and many more.

**PRACTICE_CODES** — day-to-day practice, loosely grouped into:
- Numbers, digits, and loops
- Arrays (traversal, pointers, dynamic memory)
- Strings (character arrays, pointer-based operations)

Each `.c` file is self-contained, and most are named `programXX.c` in the order I wrote them.

## Running the programs

You need a C compiler — GCC works fine.

```bash
git clone https://github.com/yashavinashmirge-del/C_PROGRAMMING.git
cd C_PROGRAMMING

# compile a program
gcc CP_CODES/program10.c -o Myexe

# run it
./program10
```

On Windows, use MinGW or WSL, and the output file will be `program10.exe`.

## Notes

- Some programs repeat similar logic on purpose — they were written at different points while practicing the same concept in different ways.
- Code quality varies across the repo since it spans different stages of learning. Older programs may be simpler or less optimized than later ones.
- Not all folders are fully documented yet — this is a work in progress and gets updated as I keep practicing.

## Author

Yash Avinash Mirge
[github.com/yashavinashmirge-del](https://github.com/yashavinashmirge-del)



