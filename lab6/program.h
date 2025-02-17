#ifndef PROGRAM_H
#define PROGRAM_H

int count_zeros(int** array, int rows, int cols);
int longest_series_row(int** array, int rows, int cols);
int** create_array(int rows, int cols);
void fill_array(int** array, int rows, int cols);
int** create_test_array(int rows, int cols, std::initializer_list<std::initializer_list<int>> values);
void delete_array(int** array, int rows);

#endif // PROGRAM_H
