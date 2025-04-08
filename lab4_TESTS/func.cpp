#include "func.h"
#include <string>
#include <map>

std::map<double, std::string> calculate(double a, double b, double c, double Xmin, double Xmax, double dx) {
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

    return data;
}
