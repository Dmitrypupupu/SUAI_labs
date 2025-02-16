#include <iostream>
#include "program.h"

int main() {
    int n;
    std::cin >> n;
    
    int* data = new int[n];
    for (int index = 0; index < n; index++) {
        std::cin >> data[index];
    }

    std::cout << even_composition(data, n) << '\n' << zero_summ(data, n) << '\n';
    
    unique_sort(data, n);

    delete[] data;

    return 0;
}
