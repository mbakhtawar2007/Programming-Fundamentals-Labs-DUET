# Programming Fundamentals

A hands-on C++ notebook built one small program at a time. Across four labs, each exercise is a chance to turn a question into code, run it, and see what happens.

> **Read it. Build it. Break it. Understand it.**

## The Practice Loop

1. **Choose** an exercise that catches your interest.
2. **Compile and run** it to see the program in action.
3. **Experiment** by changing an input or trying a different approach.
4. **Reflect** on what changed and why.

## Repository Structure

```text
Programming Findamentals/
├── Lab 01/
│   ├── Excercise 01/Hello.cpp
│   └── Exercise 02/ExampleA.cpp, ExampleB.cpp
├── Lab 02/
│   ├── Excercise 01/main.cpp
│   ├── Excercise 02/main.cpp
│   ├── Excercise 03/main.cpp
│   ├── Excercise 04/main.cpp
│   └── Excercise 05/main.cpp
├── Lab 03/
│   ├── Excercise 01/main.cpp
│   ├── Excercise 02/main.cpp
│   ├── Excercise 03/main.cpp
│   ├── Excercise 04/main.cpp
│   ├── Excercise 05/main.cpp
│   └── Excercise 06/main.cpp
└── Lab 04/
    ├── Excercise 01/main.cpp
    ├── Excercise 02/main.cpp
    ├── Excercise 03/main.cpp
    ├── Excercise 04/main.cpp
    
```

> Folder names are shown as they currently appear in the repository.

## Requirements

- A C++ compiler, such as [MinGW-w64](https://www.mingw-w64.org/) on Windows or `g++` on Linux and macOS.
- A terminal or an IDE that supports C++.

## Compile and Run

Compile an individual source file from the repository root. For example, to run the grade-checking program in Lab 04:

```bash
g++ "Lab 04/Excercise 04/main.cpp" -o grade-checker
```

On Windows, run the generated executable with:

```powershell
./grade-checker.exe
```

On Linux or macOS, run it with:

```bash
./grade-checker
```

Replace the source path with the exercise you want to compile. Programs with the same filename should be compiled separately; each exercise is intended to be built and run independently.

## Contributing

If extending the collection, keep each exercise in its corresponding lab folder and use clear, descriptive filenames for new source files.

## License

No license is currently specified for this repository.