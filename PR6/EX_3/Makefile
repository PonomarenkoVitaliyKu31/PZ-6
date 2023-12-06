CC = gcc
CFLAGS = -pthread

all: main

main: main.o thread_functions.o
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.c thread_functions.h
	$(CC) $(CFLAGS) -c $<

thread_functions.o: thread_functions.c thread_functions.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f main *.o
