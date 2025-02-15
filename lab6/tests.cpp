#include <iostream>
#include <cassert>
#include "program.h"

void run_tests() {
    // Тест 1: 2 столбца содержат ноль
    int** arr1 = create_test_array(3, 4, {
        {1, 0, 3, 4},
        {5, 6, 0, 8},
        {9, 10, 11, 12}
    });
    assert(count_zeros(arr1, 3, 4) == 2);
    assert(longest_series_row(arr1, 3, 4) == 0);
    delete_array(arr1, 3);

    // Тест 2: 3 столбца содержат ноль
    int** arr2 = create_test_array(4, 5, {
        {0, 2, 3, 4, 5},
        {6, 7, 0, 9, 10},
        {0, 12, 13, 0, 15},
        {16, 17, 18, 19, 20}
    });
    assert(count_zeros(arr2, 4, 5) == 3);
    assert(longest_series_row(arr2, 4, 5) == 0);
    delete_array(arr2, 4);

    // Тест 3: строка с самой длинной серией (ряд из 4 одинаковых элементов)
    int** arr3 = create_test_array(4, 5, {
        {1, 2, 2, 3, 3},
        {5, 5, 5, 6, 7},
        {8, 8, 8, 8, 9},
        {4, 4, 5, 5, 5}
    });
    assert(count_zeros(arr3, 4, 5) == 0);
    assert(longest_series_row(arr3, 4, 5) == 2);
    delete_array(arr3, 4);

    // Тест 4: все элементы одинаковые, длиннейшая серия в любой строке (вернется 0, так как первая строка лидирует)
    int** arr4 = create_test_array(3, 3, {
        {1, 1, 1},
        {1, 1, 1},
        {1, 1, 1}
    });
    assert(count_zeros(arr4, 3, 3) == 0);
    assert(longest_series_row(arr4, 3, 3) == 0);
    delete_array(arr4, 3);

    // Тест 5: пустая матрица (размер 1x1, нет нулей)
    int** arr5 = create_test_array(1, 1, {
        {7}
    });
    assert(count_zeros(arr5, 1, 1) == 0);
    assert(longest_series_row(arr5, 1, 1) == 0);
    delete_array(arr5, 1);

    std::cout << "Все тесты успешно пройдены!" << std::endl;
}
