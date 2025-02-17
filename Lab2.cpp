#include <iostream>
#include <cmath>
int main(){
    int x,y;
    std::cin >> x >> y;
    if ((x >= 0 && std::max(x, y) <= 1) || (x <=0 && x*x+y*y <=1)) {
        std::cout << "Точка попала в область!" << std::endl;
    }
    else {
        std::cout << "Точка не попала в область!" << std::endl;
    }
    return 0;
}