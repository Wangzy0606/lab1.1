#include "lib.h"
#include <fstream>
#include <sstream>

std::string getHelloMessage() {
    std::ifstream file("version.txt");
    std::string version;
    if (file.is_open()) {
        std::getline(file, version);
        file.close();
    } else {
        version = "1.0.0"; // 默认版本，避免文件缺失报错
    }
    return "Hello, World! Version " + version;
}
