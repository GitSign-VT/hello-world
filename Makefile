objects = calc.c 
CC=gcc
CFLAGS = -g
source_files = calc.c

all : hello.o 
	echo "Objects Hello World"
	$(CC) $(source_files) -o hello

hello.o : calc.c 
	$(CC) -c $(source_files) -o hello.o

clean: 
	rm -rf hello*
