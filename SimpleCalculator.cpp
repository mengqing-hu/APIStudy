#include "Calculator.h"

// 实现计算器接口
class SimpleCalculator : public Calculator {
public:
    int add(int a, int b) override {
        return a + b;
    }

    int subtract(int a, int b) override {
        return a - b;
    }
};