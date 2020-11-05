all: lista clean

lista:	trabalho2_eda.o tadListaDupCirc.o tadListaDupEnc.o tadNoDup.o
	g++ -o lista trabalho2_eda.o tadListaDupCirc.o tadListaDupEnc.o tadNoDup.o

trabalho2_eda.o:  trabalho2_eda.cpp tadListaDupCirc.h tadListaDupEnc.h
		g++ -o trabalho2_eda.o trabalho2_eda.cpp -c -Wall -ansi -pedantic -std=c++11
		
tadListaDupCirc.o: tadListaDupCirc.cpp tadListaDupCirc.h tadNoDup.cpp
		g++ -o tadListaDupCirc.o tadListaDupCirc.cpp -c -Wall -ansi -pedantic -std=c++11
		
tadListaDupEnc.o: tadListaDupEnc.cpp tadListaDupEnc.h tadNoDup.cpp
		g++ -o tadListaDupEnc.o tadListaDupEnc.cpp -c -Wall -ansi -pedantic -std=c++11

tadNoDup.o: tadNoDup.cpp tadNoDup.h
	g++ -o tadNoDup.o tadNoDup.cpp -c -Wall -ansi -pedantic -std=c++11
	
clean:
	rm -f *.out *.o *~
