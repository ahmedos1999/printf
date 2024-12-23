0x11. C - printf (Group Project) by Ahmed Osama, Ahmed Osama

# Custom Printf Implementation

This repository contains a custom implementation of the standard `printf` function in C. The project showcases an in-depth understanding of string formatting, low-level I/O operations, and memory management in C programming.

## Table of Contents

- [Project Overview](#project-overview)
- [Features](#features)
- [Usage](#usage)
- [Project Structure](#project-structure)
- [How It Works](#how-it-works)
- [Contributing](#contributing)
- [License](#license)
- [Acknowledgments](#acknowledgments)

## Project Overview

The `printf` function is a cornerstone of C programming, used for formatted output. This custom implementation replicates the functionality of the standard library's `printf`, providing flexibility and control for embedded systems or custom requirements.

## Features

- **Format Specifiers**: Supports standard format specifiers such as `%d`, `%s`, `%c`, and `%x`.
- **Custom Output Handling**: Allows integration with different I/O streams.
- **Memory-Efficient**: Optimized for use in resource-constrained environments.
- **Portable Code**: Designed to be cross-platform compatible.

## Usage

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/ahmedos1999/printf.git
   ```

2. **Compile the Code**:
   - Use a C compiler like `gcc` to build the project:
     ```bash
     gcc -o printf main.c custom_printf.c
     ```

3. **Run the Program**:
   ```bash
   ./printf
   ```

4. **Modify and Extend**:
   - Integrate the `custom_printf` function into your own projects for customized output formatting.

## Project Structure

- `/source`: Contains the implementation files, including `custom_printf.c` and headers.
- `/examples`: Provides example use cases for testing and understanding the implementation.
- `/docs`: Documentation explaining the design and development process.

## How It Works

The custom `printf` function parses a format string and replaces placeholders with corresponding arguments. The implementation involves:

1. **Parsing**: Identifies format specifiers and extracts information.
2. **Formatting**: Converts data types into strings based on the specifier.
3. **Output**: Writes formatted strings to the desired output stream.

### Supported Specifiers

| Specifier | Description |
|-----------|-------------|
| `%d`      | Integer     |
| `%s`      | String      |
| `%c`      | Character   |
| `%x`      | Hexadecimal |
