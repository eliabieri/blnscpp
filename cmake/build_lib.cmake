add_library(lib_blns STATIC src/blns/blns.cpp)

target_include_directories(lib_blns
        PUBLIC
        ${PROJECT_SOURCE_DIR}/include
        )