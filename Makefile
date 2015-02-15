FLAGS = -std=c99 -Wall

all: collatz.exe

collatz.exe: Collatz.c
	gcc $(FLAGS) Collatz.c -o collatz.exe