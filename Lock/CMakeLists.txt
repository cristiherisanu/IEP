add_library( Lock STATIC Lock.hpp Lock.cpp )
target_include_directories( Lock PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}" )
