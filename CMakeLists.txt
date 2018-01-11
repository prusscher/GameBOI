cmake_minimum_required(VERSION 3.0)

project(GameBOI)

# Include SDL2
find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

# Im Lazy, Include all of these files
file(GLOB helloworld_SRC
    "src/*.hpp"
    "src/*.cpp"
    "src/graphics/*.hpp"
    "src/graphics/*.cpp"
    "src/SDL/*.hpp"
    "src/SDL/*.cpp"
)

add_executable(GameBOI ${helloworld_SRC})
target_link_libraries(GameBOI ${SDL2_LIBRARIES})