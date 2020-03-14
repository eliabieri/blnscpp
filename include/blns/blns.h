/*
* C++ API for the Big List of Naughty Strings https://github.com/minimaxir/big-list-of-naughty-strings
* See LICENSE file at the top of the source tree.
*
* @author Elia Bieri <bieri.elia@gmail.com>
*/
#include <fstream>
#include <iterator>
#include <vector>
#include <filesystem>

namespace blns
{

class Blns
{
public:
    Blns()
        : blnsFile{std::filesystem::current_path() / ".." / ".." / "big-list-of-naughty-strings" / "blns.txt"}
    {
        std::copy(std::istream_iterator<std::string>(blnsFile),
                  std::istream_iterator<std::string>(),
                  std::back_inserter(blns));
    }

    /*
     * Returns the list of Naughty Strings
     * @return list of naugthy strings
     */
    std::vector<std::string> const &getStrings()
    {
        return blns;
    }

private:
    std::ifstream blnsFile;
    std::vector<std::string> blns;
};

}