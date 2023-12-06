CC = gcc
CFLAGS = -Wall -pthread

SRCDIR = .

SOURCES = $(SRCDIR)/main.c $(SRCDIR)/catalan.c $(SRCDIR)/prime.c $(SRCDIR)/thread.c
HEADERS = $(SRCDIR)/catalan.h $(SRCDIR)/prime.h $(SRCDIR)/thread.h

OBJS = $(SOURCES:.c=.o)

EXECUTABLE = my_program

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(EXECUTABLE)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXECUTABLE)
