cmake_minimum_required(VERSION 3.16)  # CMake version check
project(IEP)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

add_subdirectory(Food)
add_subdirectory(Pizza)
add_subdirectory(Pasta)
add_subdirectory(Lock)
add_executable(IEP src/main.cpp)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

target_link_libraries(IEP Food)
target_link_libraries(IEP Pizza)
target_link_libraries(IEP Pasta)
target_link_libraries(IEP Lock)
