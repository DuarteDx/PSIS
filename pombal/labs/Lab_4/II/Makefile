all: debug normal optimized

debug: II.c
	gcc -Wall -Wextra -g II.c -o II_debug -lrt -lpthread

normal: II.c
	gcc -Wall -Wextra II.c -o II_normal -lrt -lpthread

optimized: II.c
	gcc -Wall -Wextra -O3 II.c -o II_optimized -lrt -lpthread

time: all
	time ./II_debug
	time ./II_normal
	time ./II_optimized

.PHONY: clean
clean:
	rm -f II_*
