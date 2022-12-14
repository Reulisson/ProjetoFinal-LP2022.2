all: prog.e

prog.e: main.o pgm.o quantizar.o util.o
    gcc -o prog.e main.o pgm.o quantizar.o util.o

main.o: main.c
    gcc -o main.o -c main.c

pgm.o: pgm.c
    gcc -o pgm.o -c pgm.c

quantizar.o: quantizar.c
    gcc -o quantizar.o -c quantizar.c

util.o: util.c
    gcc -o util.o -c util.c

clean:
    rm -f *.o prog.e 
