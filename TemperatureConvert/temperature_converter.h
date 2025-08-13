// temperature_converter.h
#pragma once
#include <memory>

// 温度转换接口
class ITemperatureConverter {
public:
    virtual ~ITemperatureConverter() = default;

    // 摄氏度 -> 华氏度
    virtual double celsius_to_fahrenheit(double celsius) const = 0;

    // 华氏度 -> 摄氏度
    virtual double fahrenheit_to_celsius(double fahrenheit) const = 0;
};

// 工厂函数
std::unique_ptr<ITemperatureConverter> make_temperature_converter();
