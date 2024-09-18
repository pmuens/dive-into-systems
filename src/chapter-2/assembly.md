# Assembly

## Create Assembly File

```sh
# `-m32` to create a IA32 assembly.
gcc -m32 -S assembly.c
```

## Assembly to Object File

```sh
gcc -m32 -c assembly.s
```

## Object File to Executable

```sh
gcc -m32 -o executable assembly.o
```

## Machine Code vs. Assembly Code

```sh
objdump -d assembly.o

cat assembly.s
```
