all: setup build-gcc
debug: setup build-clang

GCC_OPTS = -Wall -Wextra -Werror -pedantic
CLANG_OPTS = -g -Wall -Wextra -Werror -pedantic

setup:
	mkdir -p dist

clean:
	rm -rf dist

build-gcc:
	gcc $(GCC_OPTS) -o ./dist/main ./src/*.c

build-clang:
	clang $(CLANG_OPTS) -o ./dist/main ./src/*.c
