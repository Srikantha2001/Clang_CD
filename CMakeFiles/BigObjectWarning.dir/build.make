# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/srikantha/Documents/CD_EL

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/srikantha/Documents/CD_EL

# Include any dependencies generated for this target.
include CMakeFiles/BigObjectWarning.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/BigObjectWarning.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/BigObjectWarning.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BigObjectWarning.dir/flags.make

CMakeFiles/BigObjectWarning.dir/BigObjectWarning.cc.o: CMakeFiles/BigObjectWarning.dir/flags.make
CMakeFiles/BigObjectWarning.dir/BigObjectWarning.cc.o: BigObjectWarning.cc
CMakeFiles/BigObjectWarning.dir/BigObjectWarning.cc.o: CMakeFiles/BigObjectWarning.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/srikantha/Documents/CD_EL/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BigObjectWarning.dir/BigObjectWarning.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/BigObjectWarning.dir/BigObjectWarning.cc.o -MF CMakeFiles/BigObjectWarning.dir/BigObjectWarning.cc.o.d -o CMakeFiles/BigObjectWarning.dir/BigObjectWarning.cc.o -c /home/srikantha/Documents/CD_EL/BigObjectWarning.cc

CMakeFiles/BigObjectWarning.dir/BigObjectWarning.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BigObjectWarning.dir/BigObjectWarning.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/srikantha/Documents/CD_EL/BigObjectWarning.cc > CMakeFiles/BigObjectWarning.dir/BigObjectWarning.cc.i

CMakeFiles/BigObjectWarning.dir/BigObjectWarning.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BigObjectWarning.dir/BigObjectWarning.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/srikantha/Documents/CD_EL/BigObjectWarning.cc -o CMakeFiles/BigObjectWarning.dir/BigObjectWarning.cc.s

# Object files for target BigObjectWarning
BigObjectWarning_OBJECTS = \
"CMakeFiles/BigObjectWarning.dir/BigObjectWarning.cc.o"

# External object files for target BigObjectWarning
BigObjectWarning_EXTERNAL_OBJECTS =

BigObjectWarning.so: CMakeFiles/BigObjectWarning.dir/BigObjectWarning.cc.o
BigObjectWarning.so: CMakeFiles/BigObjectWarning.dir/build.make
BigObjectWarning.so: /usr/lib/llvm-11/lib/libLLVM-11.so.1
BigObjectWarning.so: CMakeFiles/BigObjectWarning.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/srikantha/Documents/CD_EL/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared module BigObjectWarning.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BigObjectWarning.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BigObjectWarning.dir/build: BigObjectWarning.so
.PHONY : CMakeFiles/BigObjectWarning.dir/build

CMakeFiles/BigObjectWarning.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BigObjectWarning.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BigObjectWarning.dir/clean

CMakeFiles/BigObjectWarning.dir/depend:
	cd /home/srikantha/Documents/CD_EL && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/srikantha/Documents/CD_EL /home/srikantha/Documents/CD_EL /home/srikantha/Documents/CD_EL /home/srikantha/Documents/CD_EL /home/srikantha/Documents/CD_EL/CMakeFiles/BigObjectWarning.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BigObjectWarning.dir/depend
