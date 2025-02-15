#include <cmath>
#include <iostream>

const double coefficient = 0.017453292519943;
int main() {
  double alpha_grad;
  float z1, z2;
  std::cin >> alpha_grad;
  double alpha_rad = alpha_grad * coefficient;
  if (cos(alpha_rad) + 1 - 2 * (sin(2 * alpha_rad) * sin(2 * alpha_rad)) != 0) {
    z1 = (sin(2 * alpha_rad) + sin(5 * alpha_rad) - sin(3 * alpha_rad)) /
         (cos(alpha_rad) + 1 - 2 * (sin(2 * alpha_rad) * sin(2 * alpha_rad)));
  }
  z2 = 2 * sin(alpha_rad);
  std::cout << "Результат вычислений по первой формуле: " << z1 << std::endl
            << "Результат вычислений по второй формуле: " << z2 << std::endl;
  if (z1 == z2) {
    std::cout << "Результаты вычислений по двум формулам совпали!" << std::endl;
  } else {
    std::cout << "Результаты вычислений по двум формулам не совпали!"
              << std::endl;
  }
  return 0;
}