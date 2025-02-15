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
    int data1[] = {1, 0, 2, 3, 0, 4};
    int data2[] = {0, 1, 2, 3, 4, 0};

    std::cout << "Test zero_summ:\n";
    std::cout << "Expected: 5, Got: " << zero_summ(data1, 6) << '\n';
    std::cout << "Expected: 10, Got: " << zero_summ(data2, 6) << '\n';
}

void test_unique_sort() {
    int data[] = {-3, 5, -1, 2, -2, 4};
    int expected[] = {5, 2, 4, -3, -1, -2};
    
    unique_sort(data, 6);

    std::cout << "Test unique_sort:\nExpected: ";
    for (int val : expected) std::cout << val << " ";
    std::cout << "\nGot: ";
    for (int i = 0; i < 6; i++) std::cout << data[i] << " ";
    std::cout << '\n';
}

int main() {
    test_even_composition();
    test_zero_summ();
    test_unique_sort();
    return 0;
}
