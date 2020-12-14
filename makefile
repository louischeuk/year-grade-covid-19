yearGrade: main.o Module.o AllModules.o
	g++ -std=c++14 -g -Wall main.o Module.o AllModules.o -o yearGrade

main.o: main.cpp Module.h AllModules.h
	g++ -std=c++14 -g -Wall -c main.cpp
	
Module.o: Module.cpp Module.h
	g++ -std=c++14 -g -Wall -c Module.cpp

AllModules.o: AllModules.cpp AllModules.h
	g++ -std=c++14 -g -Wall -c AllModules.cpp

clean:
	rm -f *.o yearGrade
