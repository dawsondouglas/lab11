demo: main.cpp calculator.cpp
	g++ -std=c++11 demo -Wall main.cpp calculator.cpp -o
calculator.o: calculator.cpp
	g++ std=c++11 -o calculator.cpp