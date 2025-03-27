#ifndef EXCEPTION_STRUCTS_H
#define EXCEPTION_STRUCTS_H
#include <exception>

struct NoZeroException : std::exception {
    const char* what() const noexcept override;
};

struct OneZeroException : std::exception {
    const char* what() const noexcept override;
};

struct TwoZeroesRow : std::exception {
    const char* what() const noexcept override;
};
#endif // EXCEPTION_STRUCTS_H