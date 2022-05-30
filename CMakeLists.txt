cmake_minimum_required(VERSION 3.5)

project(blnscpp VERSION 1.0)
file(DOWNLOAD https://raw.githubusercontent.com/minimaxir/big-list-of-naughty-strings/master/blns.txt
        ${CMAKE_CURRENT_LIST_DIR}/blns.txt)
include(cmake/build_example.cmake)

