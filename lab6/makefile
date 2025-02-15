CXX = g++
CXX_FLAGS = -std=c++17 -Wall -Wextra -fsanitize=address

all: main

main: main.o program.o tests.o
	$(CXX) $(CXX_FLAGS) -o main main.o program.o tests.o

main.o: main.cpp tests.h
	$(CXX) $(CXX_FLAGS) -c main.cpp

program.o: program.cpp program.h
	$(CXX) $(CXX_FLAGS) -c program.cpp

tests.o: tests.cpp program.h
	$(CXX) $(CXX_FLAGS) -c tests.cpp

clean:
	rm -f *.o main
