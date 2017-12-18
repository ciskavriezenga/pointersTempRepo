CC = g++

pointers : main.o
	$(CC) -o pointers main.o

main.o:
	$(CC) -c main.cpp

clean:
	rm -f *.o
	rm -f pointers
