# compiler
CC=gcc

# compiler flags
CFLAGS=-Wall\
	   -Wextra\
	   -g\
	   -O0

all: char-conv.c
	$(CC) $(CFLAGS) char-conv.c -o char-conv

.PHONY: clean
clean:
	rm -f char-conv
