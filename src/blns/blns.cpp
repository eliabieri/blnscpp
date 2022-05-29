#include <blns/blns.h>
#include <cassert>
#include <algorithm>
#include <string>

blns::Blns::Blns() {
        std::ifstream blnsFile = std::filesystem::path(__FILE__).parent_path()
                / ".." / ".." / "big-list-of-naughty-strings" / "blns.txt";

        // If this assertion fails, ensure that you have correctly initialized and updated the submodules for this repo
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

std::vector<std::string> const &blns::Blns::getStrings() const {
    return blns;
}
