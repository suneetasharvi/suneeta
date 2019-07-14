build.exe:main.o primenum.o fact.o fibonacci.o sqcube.o
	gcc -o build.exe main.o primenum.o fact.o fibonacci.o sqcube.o

main.o:main.c
	gcc -c main.c
primenum.o:primenum.c
	gcc -c primenum.c
fact.o:fact.c
	gcc -c fact.c

fibonacci.o:fibonacci.c
	gcc -c fibonacci.c
sqcube.o:sqcube.c	
	gcc -c sqcube.c



