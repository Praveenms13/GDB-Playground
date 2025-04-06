#include <iostream>
#include <string>

int main() {
    std::string cppString = "Hello, world!";

    // Convert std::string to C-style string
    const char* cString = cppString.c_str();

    // Print the C-style string
    std::cout << cppString.c_str()[1] << std::endl;

    return 0;
}
