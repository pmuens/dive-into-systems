all: setup build

OPTS = -Wall -Wextra -Werror -pedantic

setup:
	mkdir -p dist

clean:
	rm -rf dist

build: ./dist/main.o ./dist/math.o
	gcc $(OPTS) ./dist/main.o ./dist/math.o -o ./dist/main

./dist/main.o: ./src/math.h ./src/main.c
	gcc $(OPTS) -c ./src/main.c -o ./dist/main.o

./dist/math.o: ./src/math.h ./src/math.c
	gcc $(OPTS) -c ./src/math.c -o ./dist/math.o
