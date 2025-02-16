#include <iostream>
#include <cassert>
#include "program.h"

void test_getFirstWord() {
    char firstWord[100];

    // Тест 1: Обычная строка
    getFirstWord("Hello, world!", firstWord);
    assert(strcmp(firstWord, "Hello,") == 0);

    // Тест 2: Пробелы в начале
    getFirstWord("   Leading spaces", firstWord);
    assert(strcmp(firstWord, "Leading") == 0);

    // Тест 3: Только пробелы
    getFirstWord("    ", firstWord);
    assert(strcmp(firstWord, "") == 0);

    // Тест 4: Пустая строка
    getFirstWord("", firstWord);
    assert(strcmp(firstWord, "") == 0);

    // Тест 5: Одно слово
    getFirstWord("Word", firstWord);
    assert(strcmp(firstWord, "Word") == 0);

    // Тест 6: Разные разделители
    getFirstWord("\tTabs and spaces", firstWord);
    assert(strcmp(firstWord, "Tabs") == 0);

    std::cout << "Все тесты для getFirstWord пройдены!\n";
}

// Функция тестирования create_string
void test_create_string() {
    std::cout << "Введите строку для create_string (например: Hello world): ";
    char* str = create_string(100);

    std::cout << "Вы ввели: " << str << std::endl;

    delete[] str;
    std::cout << "Тест для create_string пройден (если строка корректно выводится).\n";
}