#include <blns/blns.h>
#include <iostream>

int main() {
    auto blns = blns::Blns{};
    for (auto const &ns : blns.getStrings())
    {
        std::cout << ns << std::endl;
    }
}