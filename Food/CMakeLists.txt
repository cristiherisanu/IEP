add_library( Food STATIC Food.hpp Food.cpp )

target_include_directories( Food PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}" )
