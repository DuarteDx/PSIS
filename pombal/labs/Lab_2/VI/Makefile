# compiler
CC=gcc

# compiler flags
CFLAGS=-Wall\
	   -Wextra\
	   -g\
	   -O0

all: complex.c
	$(CC) $(CFLAGS) complex.c -o complex

.PHONY: clean
clean:
	rm -f complex
