# Compilation

Also see [Tools for examining different phases of compiling and running a C program](https://www.cs.swarthmore.edu/~newhall/unixhelp/compilecycle.html).

## Linking Libraries

```sh
gcc -o myprog myprog.c -pthread -lreadline
```

## Static Linking

```sh
gcc -o myprog myprog.c --static -pthread -lreadline
```

## Compiler Steps

### 1. Precompile

Runs preprocessor to expand preprocessor directives.

```sh
gcc -E myprog.c
gcc -E myprog.c > out
vim out
```

### 2. Compile

Translates C code (`.c` files) to machine-specific assembly code (`.s` files).

```sh
gcc -S myprog.c
vim myprog.s
```

### 3. Assembly

Converts assembly code (`.s` files) into relocatable binary object code (`.o` files).

```sh
gcc -c myprog.c
# Disassemble functions in myprog.o with objdump.
objdump -d myprog.o
```

### 4. Link Editing

Creates single executable file from relocatable binaries (`.o` files) and libraries (`.a` or `.so` files).

```sh
gcc myprog.c
./a.out

# Disassemble functions in a.out with objdump.
objdump -d a.out
```

### 5. Runtime Linking

Only necessary if executable was linked with shared object files (`.so` files).

```sh
# List an executable's shared object dependencies.
ldd a.out
```
