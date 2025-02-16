#include <iostream>
#include <cassert>
#include <cstring>
#include "program.h"

void test_getFirstWord() {
    char firstWord[100];

    getFirstWord("Hello, world!", firstWord);
    assert(strcmp(firstWord, "Hello,") == 0);

    getFirstWord("   Leading spaces", firstWord);
    assert(strcmp(firstWord, "Leading") == 0);

    getFirstWord("    ", firstWord);
    assert(strcmp(firstWord, "") == 0);

    getFirstWord("", firstWord);
    assert(strcmp(firstWord, "") == 0);

    getFirstWord("Word", firstWord);
    assert(strcmp(firstWord, "Word") == 0);

    getFirstWord("\tTabs and spaces", firstWord);
    assert(strcmp(firstWord, "Tabs") == 0);

    std::cout << "Все тесты для getFirstWord пройдены!\n";
}

void test_create_string() {
    std::cout << "Введите строку для create_string: ";
    char* str = create_string(100);

    std::cout << "Вы ввели: " << str << std::endl;

    delete[] str;
    std::cout << "Тест для create_string пройден.\n";
}


