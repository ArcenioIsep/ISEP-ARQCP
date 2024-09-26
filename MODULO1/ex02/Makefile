ex02: sum.o main.o
	gcc sum.o main.o -o ex02

sum.o: sum.c sum.h
	gcc -g -Wall -Wextra -fanalyzer -c sum.c -o sum.o

main.o: main.c
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

clean:
	rm -f *.o ex02

run: ex02
	./ex02

