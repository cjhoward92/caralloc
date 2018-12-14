CC=gcc
CFLAGS=-ggdb -Wall -pedantic

CARALLOC=bin/caralloc
OBJS=bin/main.o
SRC=src/main.c

$(CARALLOC): $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS): $(SRC)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rf bin
	mkdir -p bin