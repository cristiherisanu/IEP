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
include Lock/CMakeFiles/Lock.dir/depend.make

# Include the progress variables for this target.
include Lock/CMakeFiles/Lock.dir/progress.make

# Include the compile flags for this target's objects.
include Lock/CMakeFiles/Lock.dir/flags.make

Lock/CMakeFiles/Lock.dir/Lock.cpp.o: Lock/CMakeFiles/Lock.dir/flags.make
Lock/CMakeFiles/Lock.dir/Lock.cpp.o: ../Lock/Lock.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cristi/Desktop/IEP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Lock/CMakeFiles/Lock.dir/Lock.cpp.o"
	cd /home/cristi/Desktop/IEP/build/Lock && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lock.dir/Lock.cpp.o -c /home/cristi/Desktop/IEP/Lock/Lock.cpp

Lock/CMakeFiles/Lock.dir/Lock.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lock.dir/Lock.cpp.i"
	cd /home/cristi/Desktop/IEP/build/Lock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cristi/Desktop/IEP/Lock/Lock.cpp > CMakeFiles/Lock.dir/Lock.cpp.i

Lock/CMakeFiles/Lock.dir/Lock.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lock.dir/Lock.cpp.s"
	cd /home/cristi/Desktop/IEP/build/Lock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cristi/Desktop/IEP/Lock/Lock.cpp -o CMakeFiles/Lock.dir/Lock.cpp.s

# Object files for target Lock
Lock_OBJECTS = \
"CMakeFiles/Lock.dir/Lock.cpp.o"

# External object files for target Lock
Lock_EXTERNAL_OBJECTS =

Lock/libLock.a: Lock/CMakeFiles/Lock.dir/Lock.cpp.o
Lock/libLock.a: Lock/CMakeFiles/Lock.dir/build.make
Lock/libLock.a: Lock/CMakeFiles/Lock.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cristi/Desktop/IEP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libLock.a"
	cd /home/cristi/Desktop/IEP/build/Lock && $(CMAKE_COMMAND) -P CMakeFiles/Lock.dir/cmake_clean_target.cmake
	cd /home/cristi/Desktop/IEP/build/Lock && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lock.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Lock/CMakeFiles/Lock.dir/build: Lock/libLock.a

.PHONY : Lock/CMakeFiles/Lock.dir/build

Lock/CMakeFiles/Lock.dir/clean:
	cd /home/cristi/Desktop/IEP/build/Lock && $(CMAKE_COMMAND) -P CMakeFiles/Lock.dir/cmake_clean.cmake
.PHONY : Lock/CMakeFiles/Lock.dir/clean

Lock/CMakeFiles/Lock.dir/depend:
	cd /home/cristi/Desktop/IEP/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cristi/Desktop/IEP /home/cristi/Desktop/IEP/Lock /home/cristi/Desktop/IEP/build /home/cristi/Desktop/IEP/build/Lock /home/cristi/Desktop/IEP/build/Lock/CMakeFiles/Lock.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Lock/CMakeFiles/Lock.dir/depend

