#include <iostream>
#include "../include/JsonProcessor.h"
#include "SimpleJsonProcessor.cpp" // 包含实现文件

int main() {
    SimpleJsonProcessor processor;

    // 创建输入 JSON 数据
    nlohmann::json input = { {"a", 10}, {"b", 5} };

    // 处理 JSON 数据
    nlohmann::json output = processor.process(input);

    // 输出结果
    std::cout << "加法结果: " << output["sum"] << std::endl;
    std::cout << "减法结果: " << output["difference"] << std::endl;

    return 0;
}