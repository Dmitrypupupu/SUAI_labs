#include <iostream>

int even_composition(int data[], int n) {
  int result = 1;
  for (int index = 0; index < n; index += 2) {
    result *= data[index];
  }
  return result;
}

int zero_summ(int data[], int n) {
  int lhs, rhs, result = 0;
  for (int index = 0; index < n; index++) {
    if (!data[index]) {
      lhs = index;
      break;
    }
  }
  for (int index = n - 1; index >= 0; index--) {
    if (!data[index]) {
      rhs = index;
      break;
    }
  }
  for (int index = lhs; index <= rhs; index++) {
    result += data[index];
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
  int negative[negative_count], positive[positive_count];
  int index_negative = 0, index_positive = 0;
  for (int index = 0; index < n; index++) {
    if (data[index] < 0) {
      negative[index_negative] = data[index];
      index_negative++;
    } else {
      positive[index_positive] = data[index];
      index_positive++;
    }
  }
  int result[n];
  for (int index = 0; index < positive_count; index++) {
    data[index] = positive[index];
  }
  for (int index = 0; index < negative_count; index++) {
    data[index + positive_count] = negative[index];
  }
}

int main() {
  int n;
  std::cin >> n;
  int data[n];
  for (int index = 0; index < n; index++) {
    int number;
    std::cin >> number;
    data[index] = number;
  }
  std::cout << even_composition(data, n) << '\n' << zero_summ(data, n) << '\n';
  unique_sort(data, n);
  return 0;
}