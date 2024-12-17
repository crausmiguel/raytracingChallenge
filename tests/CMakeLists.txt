file(GLOB TEST_SOURCES vectors/*.cc)
add_library(tests ${TEST_SOURCES})

target_link_libraries(tests vectors)
target_link_libraries(tests utils)
target_include_directories(tests PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../src)

