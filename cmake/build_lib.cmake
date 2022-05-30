add_library(lib_blns STATIC src/blns/blns.cpp)

target_include_directories(lib_blns
        PUBLIC
        ${PROJECT_SOURCE_DIR}/include
        )
target_compile_options(lib_blns PRIVATE
        $<$<CXX_COMPILER_ID:MSVC>:/W4 /WX>
        $<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-Wall -Wextra -Wpedantic -Werror>)