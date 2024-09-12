all: setup build

OPTS = -Wall -Wextra -Werror -pedantic

setup:
	mkdir -p dist

clean:
	rm -rf dist

build:
	gcc $(OPTS) -o ./dist/main ./src/*.c
