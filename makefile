all: main.o Calculator.o
	g++ -g main.o Calculator.o -o calculator

main.o: main.cpp
	g++ -g -c -Wall main.cpp

Calculator.o: Calculator.cpp
	g++ -g -c -Wall Calculator.cpp 


clean:
	rm -f *.o calculator