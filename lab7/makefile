CXX = g++
CXX_FLAGS = -std=c++17 -Wall -Wextra -fsanitize=address

all: tests

tests: tests.o program.o
	@(CXX) @(CXX_FLAGS) -o tests tests.o program.o
tests.o: tests.cpp program.h
	$(CXX) $(CXXFLAGS) -c tests.cpp

program.o: program.cpp program.h
	$(CXX) $(CXXFLAGS) -c program.cpp

clean:
	rm -f *.o tests