main: main.o lab2.o
    g++ -o main main.o lab2.o

main.o: main.cpp lab2.h
    g++ -o main.o main.cpp lab2.h

lab2.o: lab2.cpp lab2.h
    g++ -o lab2.o lab2.cpp lab2.h

clean:
    rm main.o lab2.o main
