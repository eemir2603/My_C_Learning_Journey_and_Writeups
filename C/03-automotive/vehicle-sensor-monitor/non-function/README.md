# Vehicle Sensor Monitor (Non-Function Version)

A beginner-friendly C command-line project that simulates reading one vehicle sensor value and classifying it with conditional statements.

> **Educational simulation only:** the thresholds in this project are invented for C programming practice. They are not real automotive sensor specifications, and the program is not connected to a vehicle or ECU.

## Classification rules and boundary tests

| Input value | Classification | Program message |
|---:|---|---|
| Less than 0 | Negative / invalid | `Sensor status cannot be negative, please check!` |
| 0 | OFF | `Sensor is off, please check!` |
| 1–19 | LOW | `Sensor is low range, please check!` |
| 20–80 | NORMAL | `Sensor is within normal range.` |
| 81–100 | HIGH | `Sensor is high range, please check!` |
| Greater than 100 | Out of range | `Sensor is out of range, please check!` |

The boundary values `-1`, `0`, `1`, `19`, `20`, `80`, `81`, `100`, and `101` can be used to check each classification.

A non-integer input such as `abc` should produce:

```text
Invalid input. Please enter an integer.
```

## Concepts practised

- `stdio.h`
- `main(void)`
- Integer variables
- `printf()` and `scanf()`
- Checking the return value of `scanf()`
- Comparison operators
- Logical AND (`&&`)
- `if` and `else if`
- Ordering conditional branches to classify values

## Build and run

Compile with GCC using common warning flags:

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic vehicle_sensor_monitor.c -o vehicle_sensor_monitor
```

Run:

```bash
./vehicle_sensor_monitor
```

## Example

Input:

```text
75
```

Output:

```text
Car Sensor Checker Initialized.
Please enter the sensor status (0-100): Sensor Status: 75
Sensor is within normal range.
```

## Current limitations

- The program reads one integer value per run.
- The return value of `scanf()` is checked, so an input that cannot be converted to an integer is rejected.
- The input is not yet validated as a complete line. For example, `75abc` may be read as the integer `75`, with the trailing characters left unread.
- The classification logic is currently inside `main()`; a separate function-based version will be developed independently.
- The boundary cases are documented for manual testing; no automated test suite has been added yet.

## Possible next improvements

1. Validate the complete input line.
2. Extract the classification logic into a function.
3. Read multiple simulated sensor values.
4. Count LOW, NORMAL, HIGH, and invalid readings.
5. Add automated test cases.

## Learning note

This is the non-function version of the Vehicle Sensor Monitor project. It demonstrates an initial procedural implementation using input validation, comparison operators, logical conditions, and conditional branching before refactoring the classification logic into a separate function.
