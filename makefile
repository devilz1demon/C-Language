CC=gcc
CFLAGS=-Wall
calc: calc.o func.o add.o sub.o mul.o div.o mod.o
a: a.o
clean:
	rm -f calc calc.o func.o a.o a add.o sub.o mul.o div.o mod.o
