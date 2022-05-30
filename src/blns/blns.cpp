#include <blns/blns.h>
#include <cassert>
#include <algorithm>
#include <string>

std::vector<std::string> const &blns::Blns::getStrings() {
    if(blns.empty()) {
        readFile();
    }
    return blns;
}

void blns::Blns::readFile() {
    std::ifstream blnsFile = std::filesystem::path(__FILE__).parent_path()
                             / ".." / ".." / "blns.txt";

    // If this assertion fails, ensure that you have correctly
    // downloaded blns.txt at the root of the project during cmake build
    assert(blnsFile.is_open());

    std::string line;
    while(getline(blnsFile, line)) {
        // Skip comments in txt file
        if(line.rfind('#', 0) != 0) {
            blns.push_back(line);
        }
    }
    assert(!blns.empty());
}
