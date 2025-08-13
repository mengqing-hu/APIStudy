#ifndef JSONPROCESSOR_H
#define JSONPROCESSOR_H

#include "json.hpp"

using json = nlohmann::json;

// 定义 JSON 处理接口
class JsonProcessor {
public:
    virtual json process(const json& input) = 0; // 处理 JSON 数据
    virtual ~JsonProcessor() {} // 虚析构函数
};

#endif // JSONPROCESSOR_H