# Vehicle Sensor Monitor (Non-Function Version)

A beginner-friendly C command-line project that simulates reading one vehicle sensor value and classifying it with conditional statements.

> **Educational simulation only:** the thresholds in this project are invented for C programming practice. They are not real automotive sensor specifications and the program is not connected to a vehicle or ECU.

## Classification rules

| Input value | Classification | Program message |
|---:|---|---|
| Less than 0 | Negative / invalid | Sensor status cannot be negative |
| 0 | OFF | Sensor is off |
| 1–19 | LOW | Sensor is low |
| 20–80 | NORMAL | Sensor is within normal range |
| 81–100 | HIGH | Sensor is high |
| Greater than 100 | Out of range | Sensor is out of range |

## Concepts practised

- `stdio.h`
- `main(void)`
- Integer variables
- `printf()` and `scanf()`
- Comparison operators
- Logical AND (`&&`)
- `if`, `else if`, and `else`
- Ordering conditional branches to classify values

## Build and run

Compile with GCC:

```bash
gcc vehicle_sensor_monitor.c -o vehicle_sensor_monitor
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
- The return value of `scanf()` is not checked yet, so non-integer input is not handled reliably.
- The final fallback branch is retained as a defensive-looking placeholder, but for a successfully read integer, the preceding conditions already cover every possible integer value.
- The classification logic is currently inside `main()`; a separate function-based version will be developed independently.

## Possible next improvements

1. Validate the result of `scanf()`.
2. Extract the classification logic into a function.
3. Read multiple simulated sensor values.
4. Count LOW, NORMAL, HIGH, and invalid readings.
5. Add automated test cases.

## Learning note

This is the non-function version of the Vehicle Sensor Monitor project. It demonstrates the initial procedural implementation before refactoring the classification logic into a separate function.
