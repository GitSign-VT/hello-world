CC=gcc
source_files = test.c

hello : hello.o 
	echo "Objects Hello World"
	$(CC) $(source_files) -o hello

hello.o : test.c 
	$(CC) -c $(source_files) -o hello.o

clean: 
	rm hello
