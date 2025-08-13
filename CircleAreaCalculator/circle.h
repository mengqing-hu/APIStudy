// circle.h
#pragma once
#include "shape.h"

class Circle : public IShape {
public:
    explicit Circle(double r) : radius(r) {}
    double area() const override;
private:
    double radius;
};
