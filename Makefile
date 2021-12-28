
compile: main.o arrayutil.o
	g++ -Wall -pedantic-errors -o main main.o arrayutil.o

main.o: main.cpp arrayutil.h
	g++ -Wall -pedantic-errors -c main.cpp

arrayutil.o: arrayutil.cpp arrayutil.h
	g++ -Wall -pedantic-errors -c arrayutil.cpp

run: compile
	./main

clean:
	rm -f main
	rm -f *.o
