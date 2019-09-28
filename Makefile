all:hello

hello: pgm1.o fact.o story.o 
	g++ pgm1.o fact.o story.o  -o hello
main.o:main.o
	g++ -c pgm1.cpp
fact.o:fact.cpp
	g++ -c fact.cpp
story.o:story.cpp
	g++ -c story.cpp

clean:
	rm -rf *o hello
