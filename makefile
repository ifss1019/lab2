main: main.o lab2.o
	g++ -o main main.o lab2.o

main.o: main.cpp lab2.h
	g++ -c main.cpp

lab2.o: lab2.cpp lab2.h
	g++ -c lab2.cpp

clean:
	rm main.o lab2.o main
