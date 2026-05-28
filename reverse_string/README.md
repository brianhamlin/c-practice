# Reverse String Utility

A small Unix-style C utility that reads lines from standard input, reverses them, and prints the result.

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
│   ├── line_reader.h
│   └── reverse.h
├── src/
│   ├── line_reader.c
│   ├── main.c
│   └── reverse.c
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
build/reverse
```

---

# Running

## Interactive Mode

Run the executable:

```bash id="jlwm43"
./build/reverse
```

Then type input:

```txt id="jlwm44"
hello
```

Output:

```txt id="jlwm45"
olleh
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
echo "banana" | ./build/reverse
```

Output:

```txt id="jlwm48"
ananab
```

---

# Using File Input

Create a file:

```txt id="jlwm49"
input.txt
```

Contents:

```txt id="jlwm50"
apple
banana
orange
```

Run:

```bash id="jlwm51"
./build/reverse < input.txt
```

Output:

```txt id="jlwm52"
elppa
ananab
egnaro
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

# Future Ideas

Potential improvements:

* Reverse words instead of characters
* Support command-line flags
* Handle arbitrarily long input lines
* Add unit tests
* Support direct file arguments
* Preserve whitespace formatting
* Add UTF-8 awareness

---

# Notes

This project intentionally avoids advanced libraries and dynamic allocation in order to focus on:

* ANSI C fundamentals
* manual string handling
* buffer management
* standard input/output streams
