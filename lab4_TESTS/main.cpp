#include "func.h"
#include <iomanip>
#include <iostream>
#include <limits>

void printTable(const std::map<double, std::string> &data) {
  std::cout << "\nТаблица значений функции:\n";
  std::cout << std::setw(10) << "x" << " | " << std::setw(15) << "f(x)" << '\n';
  std::cout << "---------------------------\n";

  for (const auto &pair : data) {
    std::cout << std::setw(10) << pair.first << " | " << std::setw(15)
              << pair.second << '\n';
  }
}

int main() {
  double a, b, c, Xmin, Xmax, dx;

  std::cout << "Введите коэффициенты a, b, c: ";
  while (!(std::cin >> a >> b >> c)) {
    std::cout << "Ошибка ввода! Введите действительные числа: ";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }

  std::cout << "Введите Xmin, Xmax, dx: ";
  while (!(std::cin >> Xmin >> Xmax >> dx) || dx <= 0) {
    std::cout << "Ошибка ввода! dx должен быть положительным. Введите Xmin, "
                 "Xmax, dx заново: ";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }

  auto result = calculate(a, b, c, Xmin, Xmax, dx);
  printTable(result);

  return 0;
}
