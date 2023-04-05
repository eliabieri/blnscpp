/*
* C++ API for the Big List of Naughty Strings https://github.com/minimaxir/big-list-of-naughty-strings
* See LICENSE file at the top of the source tree.
*
* @author Elia Bieri <bieri.elia@gmail.com>
*/

#include <vector>
#include <string>

namespace blns
{

class Blns
{
public:

    /*
     * Returns the list of Naughty Strings
     * @return list of naughty strings
     */
    [[nodiscard]] static const std::vector<std::string>& getStrings() ;

private:
    inline static std::vector<std::string> s_blns;

    static void readFile();
};

}