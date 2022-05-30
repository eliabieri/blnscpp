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

    /*
     * Returns the list of Naughty Strings
     * @return list of naugthy strings
     */
    [[nodiscard]] static std::vector<std::string> const &getStrings() ;

private:
    inline static std::vector<std::string> blns;

    static void readFile();
};

}