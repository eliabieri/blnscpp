#include <blns/blns.h>
#include <cassert>
#include <string>
#include <fstream>
#include <vector>
#include <filesystem>

const std::vector<std::string>& blns::Blns::getStrings() {
    if(s_blns.empty()) {
        readFile();
    }
    return s_blns;
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
        if(!line.empty() && line.rfind('#', 0) != 0) {
            s_blns.push_back(line);
        }
    }
    assert(!s_blns.empty());
}
