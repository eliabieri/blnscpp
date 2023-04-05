#include <blns/blns.h>
#include <iostream>

int main() {
    for (const auto& ns : blns::Blns::getStrings())
    {
        std::cout << ns << std::endl;
    }
    return 0;
}