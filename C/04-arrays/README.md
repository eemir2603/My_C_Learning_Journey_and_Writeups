# Arrays in C

## What is an array?

An array stores multiple values of the same data type under one name. Each element can be accessed using its index.

## Declaration and initialization

```c
int numbers[5] = {10, 20, 30, 40, 50};
```

- `int` is the element data type.
- `numbers` is the array name.
- `[5]` declares space for five elements.
- The values inside `{}` initialize the elements.

## Array indexing

C array indexes start at **0**.

For `int numbers[5]`:

| Expression | Value |
|---|---:|
| `numbers[0]` | 10 |
| `numbers[1]` | 20 |
| `numbers[2]` | 30 |
| `numbers[3]` | 40 |
| `numbers[4]` | 50 |

The last valid index is the array length minus one. Accessing an index outside the array bounds causes undefined behaviour.

## Updating an element

An individual element can be changed by assigning a new value to its index:

```c
numbers[0] = 25;
```

The first element is now `25`.

## Fixed size and partial initialization

A normal fixed-size array has a size determined by its declaration.

When an array is initialized with fewer values than its declared size, the remaining elements are initialized to zero:

```c
int values[5] = {10, 20};
```

The elements are `10, 20, 0, 0, 0`.

## Key takeaways

- An array stores multiple values of the same type.
- Array indexing starts at zero.
- The declared size determines the number of elements.
- The last valid index is `size - 1`.
- Array elements can be read or updated individually.
- Never access an array outside its bounds.

## Learning status

This note records the array fundamentals covered so far. Iterating through arrays with loops will be documented separately after that topic is practised.
