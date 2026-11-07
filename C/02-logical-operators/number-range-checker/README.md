# Number Range Checker

A small command-line program written in C. It reads an integer from the user and checks whether it is within the inclusive range of 10 to 20.

## Learning objectives

This project gave me practice with:

- Declaring and initializing an integer variable
- Reading input with `scanf()`
- Displaying output with `printf()`
- Comparing values with `>=` and `<=`
- Combining two conditions with the logical AND operator (`&&`)
- Using the conditional (ternary) operator (`?:`)

## How it works

The program asks the user for an integer and evaluates this condition:

```c
number >= 10 && number <= 20
```

Both comparisons must be true for the number to be considered in range. The boundaries are inclusive, so 10 and 20 are accepted.

The ternary operator selects which message to print:

- If the condition is true, the program prints that the number is in range.
- Otherwise, it prints that the number is out of range.

## Example runs

| Input | Expected output |
|---:|---|
| 5 | The number is out of range. |
| 10 | The number is in range. |
| 15 | The number is in range. |
| 20 | The number is in range. |
| 25 | The number is out of range. |

## Compile and run

Compile with GCC:

```bash
gcc -std=c11 -Wall -Wextra -pedantic number_range_checker.c -o number_range_checker
```

Run:

```bash
./number_range_checker
```

## Notes and possible improvements

- The current program assumes that the user enters a valid integer. Checking the return value of `scanf()` would make input handling safer.
- The range is fixed at 10–20. A future version could let the user enter the minimum and maximum values.
- The logical OR (`||`) and NOT (`!`) operators were also studied alongside this project, but they are not needed in the current implementation.

## What I learned

I practised combining comparison expressions with `&&` and using the result to make a decision. I also used the ternary operator as a compact alternative to an `if/else` statement.

This project helped me see how a small, clearly defined condition can control a program's output.
