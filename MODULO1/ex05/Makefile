ex05: cmp.o main.o
	gcc cmp.o main.o -o ex05

cmp.o: cmp.c cmp.h
	gcc -g -Wall -Wextra -fanalyzer -c cmp.c -o cmp.o

main.o: main.c
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

clean:
	rm -f *.o ex05

run: ex05
	./ex05

