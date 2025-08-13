
# 编译命令：
1. TemperatureConvert：

clang++ -std=gnu++17 main.cpp temperature_converter.cpp -o main
./main



2. CircleAreaCalculator

2.1 编译命令：
<!-- 点名所有实现文件 -->
clang++ -std=gnu++17 main.cpp circle.cpp -o main
<!-- 或者（目录里只有这两个 .cpp 时） -->
clang++ -std=gnu++17 *.cpp -o main

2.2 运行：
./main


3. JsonProcessor:

clang++ -std=gnu++17 -I../include SimpleJsonProcessor.cpp main.cpp -o main
./main

