#include <fstream>
#include <iostream>
#include "utils.h"

int main() {
    std::ifstream inputFile("input.txt");
    std::ofstream outputFile("output.txt");
    if (!inputFile) { 
        std::cerr << "Ошибка: не удалось открыть файл!" << std::endl;
        return 1; 
    }
    if (!outputFile) { 
        std::cerr << "Ошибка: не удалось открыть файл!" << std::endl;
        return 1; 
    }
    std::string line;
    while (std::getline(inputFile, line)) {
        if (TwoDigitNumber(line)) {
            outputFile << line << std::endl;
        }
    }

    inputFile.close();
    outputFile.close();

    return 0;
}