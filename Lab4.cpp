#include <iostream>
#include <iomanip>
#include <limits>
#include <map>

void func(int a, int b, int c, double Xmin, double Xmax, double dx) {
    std::map<double, std::string> data;

    for (double x = Xmin; x <= Xmax; x += dx) {
        double result;
        if (a < 0 && c != 0) {
            result = a * x * x + b * x + c;
        } else if (a > 0 && c == 0) {
            if (x - c == 0) {
                data[x] = "деление на 0";
                continue;
            } else {
                result = -a / (x - c);
            }
        } else {
            result = a * (x + c);
        }
        data[x] = std::to_string(result);
    }

    std::cout << "\nТаблица значений функции:\n";
    std::cout << std::setw(10) << "x" << " | " << std::setw(15) << "f(x)" << '\n';
    std::cout << "---------------------------\n";

    for (const auto& pair : data) {
        std::cout << std::setw(10) << pair.first << " | " << std::setw(15) << pair.second << '\n';
    }
}

int main() {
    int a, b, c;
    double Xmin, Xmax, dx;

    std::cout << "Введите коэффициенты a, b, c: ";
    while (!(std::cin >> a >> b >> c)) {
        std::cout << "Ошибка ввода! Введите целые числа: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::cout << "Введите Xmin, Xmax, dx: ";
    while (!(std::cin >> Xmin >> Xmax >> dx) || dx <= 0) {
        std::cout << "Ошибка ввода! dx должен быть положительным. Введите Xmin, Xmax, dx заново: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    func(a, b, c, Xmin, Xmax, dx);

    return 0;
}
