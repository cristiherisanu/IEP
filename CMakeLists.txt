cmake_minimum_required(VERSION 3.16)  # CMake version check
project(IEP)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

add_subdirectory(Food)
add_subdirectory(Pizza)
add_subdirectory(Pasta)
add_executable(IEP src/main.cpp)

target_link_libraries(IEP Food)
target_link_libraries(IEP Pizza)
target_link_libraries(IEP Pasta)
