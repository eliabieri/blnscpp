#include <blns/blns.h>
#include <iostream>

int main() {
    for (auto const &ns : blns::Blns::getStrings())
    {
        std::cout << ns << std::endl;
    }
}