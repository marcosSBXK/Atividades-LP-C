make: main.o conta.o movimentacao.o
	gcc -o main main.c conta.c movimentacao.c
conta.o: conta.c conta.h
	gcc -c conta.c
movimentacao.o: movimentacao.c movimentacao.h
	gcc -c movimentacao.c
main.o: main.c conta.h movimentacao.h
	gcc -c main.c

run: 
	gcc -o main main.c conta.c movimentacao.c
	./main
