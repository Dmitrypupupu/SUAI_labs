Clang = g++
Clang_FLAGS = -std=c++17 -Wall -Wextra

all: tests

tests: tests.o program.o
	$(Clang) $(Clang_FLAGS) -o tests tests.o program.o

tests.o: tests.cpp program.h
	$(Clang) $(Clang_FLAGS) -c tests.cpp

program.o: program.cpp program.h
	$(Clang) $(Clang_FLAGS) -c program.cpp

clean:
	rm -f *.o tests
