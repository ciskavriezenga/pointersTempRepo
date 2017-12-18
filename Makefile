CC = g++

synth : main.o
	$(CC) -o synth main.o

main.o:
	$(CC) -c main.cpp

clean:
	rm -f *.o
	rm -f synth
