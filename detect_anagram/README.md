# Detect Anagram Utility

A small Unix-style C utility that reads lines from standard input, detects if it's an anagram, and prints the result.

This project was built as a practice exercise for:

* C fundamentals
* string manipulation
* modular program structure
* Makefiles
* standard input/output streams

---

# Project Structure

```txt id="xoz9ko"
.
├── build/
├── include/
│   ├── anagram.h
│   └── line_reader.h
├── src/
│   ├── anagram.c
│   ├── line_reader.c
│   └── main.c
├── Makefile
├── README.md
└── .gitignore
```

---

# Building

Compile the project using:

```bash id="jlwm41"
make
```

This creates build artifacts inside the `build/` directory, including the executable:

```txt id="jlwm42"
build/anagram
```

---

# Running

## Interactive Mode

Run the executable:

```bash id="jlwm43"
./build/anagram
```

Then type input:

```txt id="jlwm44"
abba
```

Output:

```txt id="jlwm45"
'abba' is an anagram
```

The program continues reading input until EOF.

To exit:

* macOS/Linux:

  ```txt id="jlwm46"
  Ctrl + D
  ```

---

# Using Pipe Input

Pipe text into the program:

```bash id="jlwm47"
echo "abba" | ./build/anagram
```

Output:

```txt id="jlwm48"
'abba' is an anagram
```

---

# Using File Input

Create a file:

```txt id="jlwm49"
input.txt
```

Contents:

```txt id="jlwm50"
abba
hello
```

Run:

```bash id="jlwm51"
./build/anagram < input.txt
```

Output:

```txt id="jlwm52"
'abba' is an anagram
'hello' is not an anagram
```

---

# Cleaning Build Files

Remove generated build artifacts:

```bash id="jlwm53"
make clean
```

---

# Compiler Flags

This project uses strict compiler warnings:

```txt id="jlwm54"
-Wall -Wextra -pedantic
```

These help catch common mistakes and encourage cleaner C code.

---

# Notes

This project intentionally avoids advanced libraries and dynamic allocation in order to focus on:

* ANSI C fundamentals
* manual string handling
* buffer management
* standard input/output streams
