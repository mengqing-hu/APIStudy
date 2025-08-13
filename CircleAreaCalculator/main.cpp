#include <iostream>
#include "circle.h"

int main() {
    Circle c(5.0); // 半径 5
    std::cout << "Circle area = " << c.area() << "\n";
    return 0;
}
