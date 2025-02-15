Clang = g++
Clang_FLAGS = -std=c++17 -Wall -Wextra -fsanitize=address

all: main

main: main.o program.o tests.o
	$(Clang) $(Clang_FLAGS) -o main main.o program.o tests.o

main.o: main.cpp tests.h
	$(Clang) $(Clang_FLAGS) -c main.cpp

program.o: program.cpp program.h
	$(Clang) $(Clang_FLAGS) -c program.cpp

tests.o: tests.cpp program.h
	$(Clang) $(Clang_FLAGS) -c tests.cpp

clean:
	rm -f *.o main
