# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_SOURCE_DIR = /usr/src/crowapp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /usr/src/crowapp/build

# Include any dependencies generated for this target.
include CMakeFiles/crowapp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/crowapp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/crowapp.dir/flags.make

CMakeFiles/crowapp.dir/main.cpp.o: CMakeFiles/crowapp.dir/flags.make
CMakeFiles/crowapp.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/usr/src/crowapp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/crowapp.dir/main.cpp.o"
	/usr/local/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/crowapp.dir/main.cpp.o -c /usr/src/crowapp/main.cpp

CMakeFiles/crowapp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/crowapp.dir/main.cpp.i"
	/usr/local/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /usr/src/crowapp/main.cpp > CMakeFiles/crowapp.dir/main.cpp.i

CMakeFiles/crowapp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/crowapp.dir/main.cpp.s"
	/usr/local/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /usr/src/crowapp/main.cpp -o CMakeFiles/crowapp.dir/main.cpp.s

CMakeFiles/crowapp.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/crowapp.dir/main.cpp.o.requires

CMakeFiles/crowapp.dir/main.cpp.o.provides: CMakeFiles/crowapp.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/crowapp.dir/build.make CMakeFiles/crowapp.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/crowapp.dir/main.cpp.o.provides

CMakeFiles/crowapp.dir/main.cpp.o.provides.build: CMakeFiles/crowapp.dir/main.cpp.o


# Object files for target crowapp
crowapp_OBJECTS = \
"CMakeFiles/crowapp.dir/main.cpp.o"

# External object files for target crowapp
crowapp_EXTERNAL_OBJECTS =

crowapp: CMakeFiles/crowapp.dir/main.cpp.o
crowapp: CMakeFiles/crowapp.dir/build.make
crowapp: /usr/lib/x86_64-linux-gnu/libboost_system.so
crowapp: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
crowapp: CMakeFiles/crowapp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/usr/src/crowapp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable crowapp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/crowapp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/crowapp.dir/build: crowapp

.PHONY : CMakeFiles/crowapp.dir/build

CMakeFiles/crowapp.dir/requires: CMakeFiles/crowapp.dir/main.cpp.o.requires

.PHONY : CMakeFiles/crowapp.dir/requires

CMakeFiles/crowapp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/crowapp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/crowapp.dir/clean

CMakeFiles/crowapp.dir/depend:
	cd /usr/src/crowapp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /usr/src/crowapp /usr/src/crowapp /usr/src/crowapp/build /usr/src/crowapp/build /usr/src/crowapp/build/CMakeFiles/crowapp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/crowapp.dir/depend

