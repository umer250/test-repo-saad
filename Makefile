CC = gcc
CFLAGS = -Wall -Wextra -std=c11

all: hello calculator fibonacci

hello: hello.c
	$(CC) $(CFLAGS) -o hello.exe hello.c

calculator: calculator.c
	$(CC) $(CFLAGS) -o calculator.exe calculator.c

fibonacci: fibonacci.c
	$(CC) $(CFLAGS) -o fibonacci.exe fibonacci.c

clean:
	del *.exe *.o
