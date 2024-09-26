ex06: get_greater_digit.o main.o
	gcc get_greater_digit.o main.o -o ex06

get_greater_digit.o: get_greater_digit.c get_greater_digit.h
	gcc -g -Wall -Wextra -fanalyzer -c get_greater_digit.c -o get_greater_digit.o

main.o: main.c
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

clean:
	rm -f *.o ex06

run: ex06
	./ex06

