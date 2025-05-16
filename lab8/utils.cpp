#include "utils.h"

bool isdigit(char c){
    return c >= '0' && c<= '9';
}

bool isalpha(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

bool TwoDigitNumber(const std::string& line) {
    for (size_t i = 0; i < line.length(); i++) {
        if (isdigit(line[i]) && i + 1 < line.length() && isdigit(line[i + 1])) {
            bool lhs = (i == 0 || (!isdigit(line[i - 1]) && !isalpha(line[i - 1])));
            bool rhs = (i + 2 >= line.length() || (!isdigit(line[i + 2]) && !isalpha(line[i + 2])));
            if (lhs && rhs) {
                return true;
            }
        }
    }
    return false;
}
