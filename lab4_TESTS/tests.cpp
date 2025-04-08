#include <cassert>
#include <string>
#include "func.h"
#include <iostream>
void test1() {
    auto result = calculate(-1, 0, 2, -1, 1, 1);
    assert(result[-1].substr(0, 5) == "1.000");
    assert(result[0].substr(0, 5) == "2.000");
    assert(result[1].substr(0, 5) == "1.000");
}

void test2() {
    auto result = calculate(2, 0, 0, 0, 1, 1);
    assert(result[0] == "деление на 0");
    assert(result[1].substr(0, 5) == "-2.00");
}

void test3() {
    auto result = calculate(1, 0, 1, 0, 2, 1);
    assert(result[0].substr(0, 5) == "1.000");
    assert(result[1].substr(0, 5) == "2.000");
    assert(result[2].substr(0, 5) == "3.000");
}

int main() {
    test1();
    test2();
    test3();

    std::cout << "Все тесты пройдены успешно!\n";
    return 0;
}
