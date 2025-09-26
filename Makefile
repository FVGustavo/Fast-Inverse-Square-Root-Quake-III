all: fast_inverse_sqrt run

fast_inverse_sqrt: main.o fast_inverse_sqrt.o
	gcc main.o fast_inverse_sqrt.o -o fast_inverse_sqrt

main.o: main.c fast_inverse_sqrt.h
	gcc -c main.c

fast_inverse_sqrt.o: fast_inverse_sqrt.c fast_inverse_sqrt.h
	gcc -c fast_inverse_sqrt.c

clean:
	rm -f *.o fast_inverse_sqrt

run:
	./fast_inverse_sqrt
