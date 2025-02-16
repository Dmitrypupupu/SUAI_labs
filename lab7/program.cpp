#include <iostream>
#include "program.h"

void getFirstWord(const char* str, char* firstWord) {
    while (*str == ' ' || *str == '\t' || *str == '\n') {
        str++;
    }

    int i = 0;
    while (*str != ' ' && *str != '\t' && *str != '\n' && *str != '\0') {
        firstWord[i++] = *str++;
    }

    firstWord[i] = '\0';
}

char* create_string(int length) {
    char* string = new char[length + 1]; // +1 для '\0'
    std::cin.ignore();
    std::cin.getline(string, length + 1);
    return string;
}
