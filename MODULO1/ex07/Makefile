ex07: get_ascii_code.o main.o
	gcc get_ascii_code.o main.o -o ex07

get_ascii_code.o: get_ascii_code.c get_ascii_code.h
	gcc -g -Wall -Wextra -fanalyzer -c get_ascii_code.c -o get_ascii_code.o

main.o: main.c
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

clean:
	rm -f *.o ex07

run: ex07
	./ex07

