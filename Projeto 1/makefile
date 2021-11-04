make: main.o covid19.o
	gcc -o main main.o covid19.o
covid19.o: covid19.c covid19.h
	gcc -c covid19.c
main.o: main.c covid19.h
	gcc -c main.c
