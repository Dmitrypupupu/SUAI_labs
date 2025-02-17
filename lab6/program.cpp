#include <iostream>

#include "program.h"

int count_zeros(int** array, int rows, int cols) {
    int count = 0;
    for (int num_col = 0; num_col < cols; num_col++) {
        bool has_zero = false;
        for (int num_row = 0; num_row < rows; num_row++) {
            if (array[num_row][num_col] == 0) {
                has_zero = true;
                break;
            }
        }
        if (has_zero) {
            count++;
        }
    }
    return count;
}

int longest_series_row(int** array, int rows, int cols) {
    int max_length = 0;
    int max_row = 0;

    for (int num_row = 0; num_row < rows; num_row++) {
        int current_length = 1;
        int longest_in_row = 1;

        for (int num_col = 1; num_col < cols; num_col++) {
            if (array[num_row][num_col] == array[num_row][num_col - 1]) {
                current_length++;
            } else {
                current_length = 1;
            }

            if (current_length > longest_in_row) {
                longest_in_row = current_length;
            }
        }

        if (longest_in_row > max_length) {
            max_length = longest_in_row;
            max_row = num_row;
        }
    }

    return max_row;
}

int** create_array(int rows, int cols) {
    int** array = new int*[rows];
    for (int i = 0; i < rows; i++) {
        array[i] = new int[cols];
    }
    return array;
}

void fill_array(int** array, int rows, int cols) {
    std::cout << "Введите значения для массива размером " << rows << "x" << cols << ":\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << "array[" << i << "][" << j << "] = ";
            std::cin >> array[i][j];
        }
    }
}

int** create_test_array(int rows, int cols, std::initializer_list<std::initializer_list<int>> values) {
    int** array = new int*[rows];
    int row_index = 0;
    for (const auto& row : values) {
        array[row_index] = new int[cols];
        int col_index = 0;
        for (int val : row) {
            array[row_index][col_index++] = val;
        }
        row_index++;
    }
    return array;
}

void delete_array(int** array, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;
}
