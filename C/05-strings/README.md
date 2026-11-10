# Strings in C

## What is a string?

A string is a sequence of characters used to represent text. C does not have a built-in `string` data type. Instead, strings are represented using arrays of `char`.

## Declaring and initializing a string

```c
char name[] = "Emir";
```

- `char` is the character data type.
- `name` is the array name.
- The text is written inside double quotation marks.

A single character uses single quotation marks:

```c
char letter = 'A';
```

## The null terminator

A C string ends with a special character called the **null terminator**, written as `\0`.

For example, the string `"Emir"` contains four visible characters, but its character array also needs space for the terminating `\0`.

Conceptually, its elements are:

| Index | Character |
|---:|---|
| 0 | E |
| 1 | m |
| 2 | i |
| 3 | r |
| 4 | `\0` |

The null terminator marks the end of the string.

## Printing a string

Use the `%s` format specifier with `printf`:

```c
char car[] = "BMW";
printf("%s", car);
```

This prints:

```text
BMW
```

## Character versus string

| Character | String |
|---|---|
| `'A'` | `"A"` |
| One character | A sequence of characters |
| Often stored in a `char` variable | Stored in a `char` array |

## Key takeaways

- C represents strings using arrays of `char`.
- String literals use double quotation marks.
- A single character uses single quotation marks.
- Every properly formed C string ends with `\0`.
- Use `%s` with `printf` to print a string.

## Learning status

This note covers the introductory string concepts studied so far. String input and standard-library string functions have not been covered yet.
