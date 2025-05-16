#include <cstdio>
#include <regex>
#include "utils.h"

int main() {
    FILE* inputFile = fopen("input.txt", "r");
    FILE* outputFile = fopen("output.txt", "w");
    if (!inputFile) {
        fprintf(stderr, "Ошибка: не удалось открыть файл input.txt для чтения!\n");
        return 1;
    }
    if (!outputFile) {
        fprintf(stderr, "Ошибка: не удалось открыть файл input.txt для чтения!\n");
        return 1;
    }
    char buffer[1024]; 

    while (fgets(buffer, sizeof(buffer), inputFile)) {
        if (TwoDigitNumber(buffer)) {
            fputs(buffer, outputFile); 
        }
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}