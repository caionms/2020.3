all:	radix

radix: 	main.o geradorPlaca.o
	g++ -o radix main.o geradorPlaca.o
	
main.o: main.cpp geradorPlaca.h
	g++ -o main.o main.cpp -c -Wall -ansi -pedantic -std=c++11

geradorPlaca.o: geradorPlaca.cpp geradorPlaca.h
		g++ -o geradorPlaca.o geradorPlaca.cpp -c -Wall -ansi -pedantic -std=c++11

clean:
	rm -rf *.out *.o *~ *.txt radix