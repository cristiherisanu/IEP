# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/cristi/Desktop/IEP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cristi/Desktop/IEP/build

# Include any dependencies generated for this target.
include Food/CMakeFiles/Food.dir/depend.make

# Include the progress variables for this target.
include Food/CMakeFiles/Food.dir/progress.make

# Include the compile flags for this target's objects.
include Food/CMakeFiles/Food.dir/flags.make

Food/CMakeFiles/Food.dir/Food.cpp.o: Food/CMakeFiles/Food.dir/flags.make
Food/CMakeFiles/Food.dir/Food.cpp.o: ../Food/Food.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cristi/Desktop/IEP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Food/CMakeFiles/Food.dir/Food.cpp.o"
	cd /home/cristi/Desktop/IEP/build/Food && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Food.dir/Food.cpp.o -c /home/cristi/Desktop/IEP/Food/Food.cpp

Food/CMakeFiles/Food.dir/Food.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Food.dir/Food.cpp.i"
	cd /home/cristi/Desktop/IEP/build/Food && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cristi/Desktop/IEP/Food/Food.cpp > CMakeFiles/Food.dir/Food.cpp.i

Food/CMakeFiles/Food.dir/Food.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Food.dir/Food.cpp.s"
	cd /home/cristi/Desktop/IEP/build/Food && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cristi/Desktop/IEP/Food/Food.cpp -o CMakeFiles/Food.dir/Food.cpp.s

# Object files for target Food
Food_OBJECTS = \
"CMakeFiles/Food.dir/Food.cpp.o"

# External object files for target Food
Food_EXTERNAL_OBJECTS =

Food/libFood.a: Food/CMakeFiles/Food.dir/Food.cpp.o
Food/libFood.a: Food/CMakeFiles/Food.dir/build.make
Food/libFood.a: Food/CMakeFiles/Food.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cristi/Desktop/IEP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libFood.a"
	cd /home/cristi/Desktop/IEP/build/Food && $(CMAKE_COMMAND) -P CMakeFiles/Food.dir/cmake_clean_target.cmake
	cd /home/cristi/Desktop/IEP/build/Food && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Food.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Food/CMakeFiles/Food.dir/build: Food/libFood.a

.PHONY : Food/CMakeFiles/Food.dir/build

Food/CMakeFiles/Food.dir/clean:
	cd /home/cristi/Desktop/IEP/build/Food && $(CMAKE_COMMAND) -P CMakeFiles/Food.dir/cmake_clean.cmake
.PHONY : Food/CMakeFiles/Food.dir/clean

Food/CMakeFiles/Food.dir/depend:
	cd /home/cristi/Desktop/IEP/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cristi/Desktop/IEP /home/cristi/Desktop/IEP/Food /home/cristi/Desktop/IEP/build /home/cristi/Desktop/IEP/build/Food /home/cristi/Desktop/IEP/build/Food/CMakeFiles/Food.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Food/CMakeFiles/Food.dir/depend

