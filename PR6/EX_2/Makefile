CC = gcc
CFLAGS = -Wall -pthread

SRCDIR = .
SRCS = $(SRCDIR)/main.c $(SRCDIR)/threads.c
OBJS = $(SRCS:.c=.o)
EXEC = myprogram

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(EXEC)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)
