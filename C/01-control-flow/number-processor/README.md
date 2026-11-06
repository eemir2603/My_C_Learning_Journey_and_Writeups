# Number Processor

A small command-line program written in C as part of my C programming learning journey.

The program asks the user for an integer, processes the numbers from 1 up to that limit, skips odd numbers, and adds even numbers to a running total. It stops before the next addition would make the total exceed 50.

## Learning goals

This project brings several C fundamentals together in one program:

- Reading user input with `scanf()`
- Declaring and calling a function
- Using a function prototype
- Passing an argument to a function and returning a value
- Repeating work with a `for` loop
- Making decisions with `if`
- Skipping an iteration with `continue`
- Leaving a loop with `break`

## How it works

1. `main()` asks the user to enter an integer.
2. The input is passed to `numberProcessor()`.
3. The function loops from 1 through the supplied number.
4. Odd numbers are skipped with `continue`.
5. Before adding an even number, the function checks whether the new total would exceed 50.
6. If the limit would be exceeded, `break` ends the loop.
7. The function returns the sum, and `main()` prints it.

## Example

Input:

```text
Enter a number: 10
```

Output:

```text
Result: 30
```

The even numbers from 1 through 10 are 2, 4, 6, 8, and 10. Their sum is 30.

## More test cases

| Input | Result | Explanation |
|---:|---:|---|
| 5 | 6 | Adds 2 and 4 |
| 10 | 30 | Adds 2, 4, 6, 8, and 10 |
| 15 | 42 | Stops before adding 14 because 42 + 14 would exceed 50 |
| 20 | 42 | Stops at the same point: the next even number would exceed the limit |

## Build and run

With GCC installed, compile the source file:

```bash
gcc -std=c11 -Wall -Wextra -pedantic number_processor.c -o number_processor
```

Run it:

```bash
./number_processor
```

## Key takeaway: `break` vs `continue`

- `continue` skips the rest of the current loop iteration. In this project, it skips odd numbers.
- `break` exits the loop completely. In this project, it stops processing when the next even number would make the sum greater than 50.

## Current limitations and possible improvements

This is an early learning project. It currently assumes the user enters a valid integer. Input validation, clearer handling of negative values, and configurable sum limits are possible future improvements.

## What I practised

The main lesson was learning how separate C features work together: input, functions, loops, conditions, and loop-control statements. I also practised compiling the program with GCC and debugging issues involving function declarations and variable scope.
