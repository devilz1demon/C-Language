# Search for .c files in "/home/devilz/Desktop/C-Language" directory; .h files in "/home/devilz/Desktop/C-Language" directory
# The pattern matching character '%' matches filename without the extension
CC=gcc
CFLAGS="-Wall -lm"
vpath %.c /home/devilz/Desktop/C-Language
vpath %.h /home/devilz/Desktop/C-Language
calc: calc.o func.o add.o sub.o mul.o div.o mod.o
a: a.o
b: b.o
clean:
	rm -f calc calc.o func.o a.o a add.o sub.o mul.o div.o mod.o b.o b
	echo Cleaning Done
