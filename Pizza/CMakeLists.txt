add_library( Pizza STATIC Pizza.hpp Pizza.cpp )
target_link_libraries(Pizza Food)
target_include_directories( Pizza PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}" )
