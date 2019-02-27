all: projet.o
	g++ -std=c++11 -o projet.exe projet.o

projet.o: projet.cpp
	g++ -std=c++11 -o projet.o -c projet.cpp -W -Wall -ansi -pedantic

clean:
	rm -rf *.o && rm -rf *.exe
