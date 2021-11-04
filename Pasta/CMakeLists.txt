add_library( Pasta STATIC Pasta.hpp Pasta.cpp )
target_link_libraries(Pasta Food)
target_include_directories( Pasta PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}" )
