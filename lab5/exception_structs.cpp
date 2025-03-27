#include "exception_structs.h"

const char* NoZeroException::what() const noexcept {
    return "Ошибка. Массив не содержит нулей.";
}

const char* OneZeroException::what() const noexcept {
    return "Ошибка. Массив содержит только один ноль.";
}

const char* TwoZeroesRow::what() const noexcept {
    return "Ошибка. Два нуля следуют друг за другом.";
}
