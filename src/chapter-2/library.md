# Library

## Compile Library

### Turn Library into Binary

```sh
gcc -o library.o -c library.c
```

### Building a Static Library

```sh
ar -rcs liblibrary.a library.o
```

### Building a Dynamically Linked Library

```sh
gcc -fPIC -o library.o -c library.c
gcc -shared -o liblibrary.so library.o
```

## Compile Executable

### Static Library

```sh
gcc -o library-exe library-exe.c library.o

# or ...

gcc -o library-exe library-exe.c library.c
```

### Archive or Shared Object Files

```sh
# `-L` specifies path to the `liblibrary.[so,a]` file(s).
gcc -o library-exe library-exe.c -L . -l library
```
