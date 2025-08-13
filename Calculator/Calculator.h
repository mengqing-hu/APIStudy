#ifndef CALCULATOR_H
#define CALCULATOR_H

// 定义计算器接口
class Calculator {
public:
    virtual int add(int a, int b) = 0; // 加法
    virtual int subtract(int a, int b) = 0; // 减法
    virtual ~Calculator() {} // 虚析构函数
};

#endif // CALCULATOR_H