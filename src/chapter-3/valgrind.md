# Valgrind

## Usage

### Compilation

Compile programs with the `-g` option which adds debugging information. Never use compiler optimization in debug builds.

```sh
gcc -g program.c
```

### Debugging

```sh
valgrind -v ./a.out

# Re-direct valgrind (and a.out) output to file `output.txt`.
valgrind -v ./a.out >& output.txt
```

## Useful Commands

```sh
valgrind --tool=memcheck -v ./a.out

valgrind --leak-check=yes -v ./a.out
```
