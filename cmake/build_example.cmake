include(cmake/build_lib.cmake)

add_executable(blns_example examples/example.cpp)
target_link_libraries(blns_example PRIVATE lib_blns)