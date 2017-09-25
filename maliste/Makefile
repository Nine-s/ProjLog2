maliste: maliste.o main.o
	gcc -o maliste maliste.o main.o

maliste.o: maliste.c
	gcc -o maliste.o -c maliste.c

main.o: main.c maliste.h
	gcc -o main.o -c main.c
