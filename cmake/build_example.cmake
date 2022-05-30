include(cmake/build_lib.cmake)

add_executable(blns_example examples/example.cpp)
target_link_libraries(blns_example PRIVATE lib_blns)
target_compile_options(blns_example PRIVATE
        $<$<CXX_COMPILER_ID:MSVC>:/W4 /WX>
        $<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-Wall -Wextra -Wpedantic -Werror>)