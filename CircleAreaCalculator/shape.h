// shape.h
#pragma once

// 形状接口
class IShape {
public:
    virtual ~IShape() = default;

    // 返回形状的面积
    virtual double area() const = 0;
};
