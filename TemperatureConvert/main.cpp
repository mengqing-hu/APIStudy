#include <iostream>
#include "temperature_converter.h"

int main() {
    auto converter = make_temperature_converter();

    double c = 100.0;
    double f = converter->celsius_to_fahrenheit(c);
    std::cout << c << "°C = " << f << "°F\n";

    double f2 = 32.0;
    double c2 = converter->fahrenheit_to_celsius(f2);
    std::cout << f2 << "°F = " << c2 << "°C\n";

    return 0;
}
