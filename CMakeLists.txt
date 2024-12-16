cmake_minimum_required(VERSION 3.10)
project(raytracing)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(tests)
add_subdirectory(src)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(tests PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/tests)
target_link_libraries(${PROJECT_NAME} tests)
