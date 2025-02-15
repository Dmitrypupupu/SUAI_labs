#include "program.h"

int even_composition(int data[], int n) {
    int result = 1;
    for (int index = 0; index < n; index += 2) {
        result *= data[index];
    }
    return result;
}

int zero_summ(int data[], int n) {
    int lhs = -1, rhs = -1, result = 0;

    for (int index = 0; index < n; index++) {
        if (data[index] == 0) {
            lhs = index;
            break;
        }
    }

    for (int index = n - 1; index >= 0; index--) {
        if (data[index] == 0) {
            rhs = index;
            break;
        }
    }

    if (lhs != -1 && rhs != -1) {
        for (int index = lhs; index <= rhs; index++) {
            result += data[index];
        }
    }

    return result;
}

void unique_sort(int data[], int n) {
    int negative_count = 0, positive_count = 0;

    for (int index = 0; index < n; index++) {
        if (data[index] < 0)
            negative_count++;
        else
            positive_count++;
    }

    int* negative = new int[negative_count];
    int* positive = new int[positive_count];

    int index_negative = 0, index_positive = 0;
    for (int index = 0; index < n; index++) {
        if (data[index] < 0) {
            negative[index_negative++] = data[index];
        } else {
            positive[index_positive++] = data[index];
        }
    }

    for (int index = 0; index < positive_count; index++) {
        data[index] = positive[index];
    }
    for (int index = 0; index < negative_count; index++) {
        data[index + positive_count] = negative[index];
    }

    delete[] negative;
    delete[] positive;
}
