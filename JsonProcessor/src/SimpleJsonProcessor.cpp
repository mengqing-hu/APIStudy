#include "../include/JsonProcessor.h"

// 实现 JSON 处理接口
class SimpleJsonProcessor : public JsonProcessor {
public:
    json process(const json& input) override {
        json output;
        output["sum"] = input["a"].get<int>() + input["b"].get<int>();
        output["difference"] = input["a"].get<int>() - input["b"].get<int>();
        return output;
    }
};