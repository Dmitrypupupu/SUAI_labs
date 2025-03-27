#include <iostream>
#include "program.h"

void test_even_composition() {
    int data1[] = {1, 2, 3, 4, 5, 6};
    int data2[] = {10, 1, 10, 1, 10, 1};

    std::cout << "Test even_composition:\n";
    std::cout << "Expected: 15, Got: " << even_composition(data1, 6) << '\n';
    std::cout << "Expected: 1000, Got: " << even_composition(data2, 6) << '\n';
}

void test_zero_summ() {
    int data1[] = {1, 0, 2, 3, 0, 4};  // Ожидаемая сумма: 5
    int data2[] = {0, 1, 2, 3, 4, 0};  // Ожидаемая сумма: 10
    int data3[] = {0};  // Ошибка: только один ноль
    int data4[] = {0, 0};  // Ошибка: два нуля подряд
    int data5[] = {1, 2, 3, 4, 5};  // Ошибка: нет нулей

    std::cout << "Test zero_summ:\n";
    std::cout << "Expected: 5, Got: " << zero_summ(data1, 6) << '\n';
    std::cout << "Expected: 10, Got: " << zero_summ(data2, 6) << '\n';

    // Тестируем ошибки
    std::cout << "Test case with one zero:\n";
    std::cout << "Expected error, Got: " << zero_summ(data3, 1) << '\n';

    std::cout << "Test case with two zeros together:\n";
    std::cout << "Expected error, Got: " << zero_summ(data4, 2) << '\n';

    std::cout << "Test case with no zeros:\n";
    std::cout << "Expected error, Got: " << zero_summ(data5, 5) << '\n';
}

void test_unique_sort() {
    // Тест 1: нормальный случай
    int data1[] = {1, -2, 3, -4, 5, -6};
    unique_sort(data1, 6);
    std::cout << "Test 1: Expected: [1, 3, 5, -2, -4, -6], Got: [";
    for (int i = 0; i < 6; i++) {
        std::cout << data1[i] << (i < 5 ? ", " : "");
    }
    std::cout << "]\n";
    // Тест 2: пустой массив
    int data5[] = {};
    unique_sort(data5, 0);
    std::cout << "Test 5: Expected: [], Got: [";
    for (int i = 0; i < 0; i++) {
        std::cout << data5[i] << (i < 0 ? ", " : "");
    }
    std::cout << "]\n";
}



