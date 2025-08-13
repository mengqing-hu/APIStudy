// temperature_converter.cpp
#include "temperature_converter.h"

class TemperatureConverterImpl : public ITemperatureConverter {
public:
    double celsius_to_fahrenheit(double celsius) const override {
        return celsius * 9.0 / 5.0 + 32.0;
    }

    double fahrenheit_to_celsius(double fahrenheit) const override {
        return (fahrenheit - 32.0) * 5.0 / 9.0;
    }
};

std::unique_ptr<ITemperatureConverter> make_temperature_converter() {
    return std::make_unique<TemperatureConverterImpl>();
}
