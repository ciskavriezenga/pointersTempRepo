CC = g++

synth : synthesizer.o simpleSynth.o main.o
	$(CC) -o synth synthesizer.o simpleSynth.o main.o

main.o:
	$(CC) -c main.cpp

synthesizer.o:
		$(CC) -c synthesizer.cpp

simpleSynth.o:
		$(CC) -c simpleSynth.cpp


clean:
	rm -f *.o
	rm -f synth
