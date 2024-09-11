all: setup build

OPTS = -Wall -Wextra -Werror -pedantic

setup:
	mkdir -p dist

build: ./src/math.c
	gcc $(OPTS) -o ./dist/math ./src/math.c

clean:
	rm -rf dist
