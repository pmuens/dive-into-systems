# GNU Debugger (GDB)

## Usage

### Debugging C

Compile programs with the `-g` option which adds debugging information. Never use compiler optimization in debug builds.

```sh
gcc -g program.c

gdb a.out
```

### Debugging Assembly

```sh
gcc -m32 -fno-asynchronous-unwind-tables -o program program.c

gdb program
```

### Rebuilding via make

GDB can rebuild an executable without exiting by running the `make` command. Note that breakpoints might've changed and need to be updated.

```sh
make

run
```

### Attaching to a running process

```sh
ps -A | grep a.out

gdb attach <pid> a.out
```

## Useful Commands

| Command                   | Shortcut | Description                                                                                                                   |
| ------------------------- | :------: | ----------------------------------------------------------------------------------------------------------------------------- |
| `break`                   |          | Set a breakpoint                                                                                                              |
| `run`                     |          | Start program running from the beginning                                                                                      |
| `continue`                |  `cont`  | Continue execution of the program until it hits a breakpoint                                                                  |
| `quit`                    |          | Quit the GDB session                                                                                                          |
| `next`                    |   `n`    | Allow program to execute the next line of C code and then pause it                                                            |
| `nexti`                   |   `ni`   | Execute next machine code instruction, treating function call as a single instruction                                         |
| `step`                    |   `s`    | Allow program to execute the next line of C code; if the next line contains a function call, step into the function and pause |
| `stepi`                   |   `si`   | Execute next machine code instruction, stepping into function call if it is a call instruction                                |
| `list`                    |   `l`    | List C source code around pause point or specified point                                                                      |
| `print`                   |   `p`    | Print out the value of a program variable (or expression)                                                                     |
| `display`                 |          | Automatically display the value of an expression upon reaching a breakpoint                                                   |
| `enable`                  |          | Enable one or more breakpoints                                                                                                |
| `disass`                  |          | Disassemble code for a function or range of addresses                                                                         |
| `disable`                 |          | Disable one or more breakpoints                                                                                               |
| `delete`                  |          | Delete breakpoint                                                                                                             |
| `condition`               |          | Set conditions on breakpoints                                                                                                 |
| `info registers`          |          | Lists all the register values                                                                                                 |
| `where`                   |   `bt`   | Print the call stack                                                                                                          |
| `frame`                   |          | Move into the context of a specific stack frame                                                                               |
| `x`                       |          | Display the contents of a memory location                                                                                     |
| `whatis`                  |          | Show the type of an expression                                                                                                |
| `set`                     |          | Assign / Change the value of a program variable                                                                               |
| `until`                   |          | Execute the program until it reaches the specified source code line number                                                    |
| `set print thread-events` |          | Enable printing thread start and exit events                                                                                  |
| `info threads`            |          | List all existing threads in the program                                                                                      |
| `thread <threadno>`       |          | Switch to a specific thread’s execution context                                                                               |
| `help`                    |          | Displays documentation for topics and GDB commands                                                                            |
| `[Return Key]`            |          | Execute the most recent previous command                                                                                      |
