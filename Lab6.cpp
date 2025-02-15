#include <iostream>

int count_zeros(int** array, int& rows, int& cols) {
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

int longest_series_row(int** array, int& rows, int& cols) {
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

int main(){
    int rows, cols;
    std::cin >> rows >> cols;
    int** array = new int* [rows];
    for (int index =0; index<rows;index++){
        array[index]=new int[cols];
    }
    for (int num_row = 0;num_row<rows;num_row++){
        for (int num_col=0;num_col<cols;num_col++){
            std::cin >> array[num_row][num_col];
        }
    }
    std::cout << "Количество строк, в которых есть нули: " << count_zeros(array, rows, cols);
    std::cout << "Номер строки с самой длинной подстрокой одинаковых элементов: " << longest_series_row(array, rows, cols);
    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;
    return 0;
}