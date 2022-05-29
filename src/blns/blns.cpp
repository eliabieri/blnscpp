#include <blns/blns.h>
#include <cassert>

blns::Blns::Blns() {
        std::ifstream blnsFile = std::filesystem::path(__FILE__).parent_path()
                / ".." / ".." / "big-list-of-naughty-strings" / "blns.txt";

        // If this assertion fails, ensure that you have correctly initialized and updated the submodules for this repo
        assert(blnsFile.is_open());

        std::copy(std::istream_iterator<std::string>(blnsFile),
                  std::istream_iterator<std::string>(),
                  std::back_inserter(blns));
        assert(!blns.empty());
}

std::vector<std::string> const &blns::Blns::getStrings() const {
    return blns;
}
