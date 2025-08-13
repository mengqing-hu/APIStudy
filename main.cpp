#include <iostream>
#include "Calculator.h"
#include "SimpleCalculator.cpp" // 包含实现文件

int main() {
    SimpleCalculator calculator;

    int a = 10, b = 5;
    std::cout << "加法结果: " << calculator.add(a, b) << std::endl;
    std::cout << "减法结果: " << calculator.subtract(a, b) << std::endl;

    return 0;
}