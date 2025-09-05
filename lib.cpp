#include "lib.h"
#include <fstream>
#include <sstream>

std::string getVersion() {
    std::ifstream file("version.txt");
    std::string version;
    if (file.is_open()) {
        std::getline(file, version);
        file.close();
    } else {
        version = "1.0.0";
    }
    return "Hello, World! Version " + version;
}
