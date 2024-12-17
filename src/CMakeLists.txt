file(GLOB VECTORS_SRC vectors/*.cpp)
add_library(vectors ${VECTORS_SRC})

file(GLOB UTILS_SRC utils/*.cc)
add_library(utils ${UTILS_SRC})

target_link_libraries(vectors utils)
target_include_directories(vectors PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})


