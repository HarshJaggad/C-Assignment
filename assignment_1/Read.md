# Queue Implementation in C

This is a simple C program that implements a basic queue data structure. The queue follows a First-In-First-Out (FIFO) approach, where elements are added at the rear and removed from the front.

## Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Usage](#usage)
- [Functions](#functions)
- [Compile and Run](#compile-and-run)


## Overview

The program provides a menu-driven interface to perform various operations on the queue, including adding elements, removing elements by index, finding and removing elements by value, and printing the current state of the queue.

## Features

- **Add Element:** Adds an element to the rear of the queue.
- **Remove Element by Index:** Removes an element from the specified position in the queue.
- **Find and Remove Element by Value:** Searches for an element with a given value and removes it from the queue.
- **Print Queue:** Displays the current elements in the queue.
- **Dynamic Sizing:** The queue has a maximum size (`MAX_SIZE`), and it dynamically adjusts the front and rear pointers accordingly.

## Usage

1. Clone the repository or download the C file.
2. Compile the C program using a C compiler (e.g., gcc).
3. Run the compiled executable.

## Functions

### `add_element(int data)`

Adds an element to the rear of the queue. If the queue is full, it prints a message indicating that no more elements can be added.

### `remove_element(int position)`

Removes the element at the specified position (0-based) from the queue. If the position is invalid or the queue is empty, it prints an error message.

### `find_and_remove_element(int data)`

Searches for an element with the given value in the queue. If found, it removes the element; otherwise, it prints a message indicating that the element was not found.

### `print_queue()`

Prints the current state of the queue. If the queue is empty, it prints a corresponding message.

## Compile and Run

Compile the program using a C compiler. For example, using gcc:

```bash
gcc queue.c -o queue
