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
CMAKE_SOURCE_DIR = /home/andrey/kursach/Simulation

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/andrey/kursach/build-Simulation-Desktop-Debug

# Utility rule file for Simulation_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/Simulation_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Simulation_autogen.dir/progress.make

CMakeFiles/Simulation_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/andrey/kursach/build-Simulation-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target Simulation"
	/usr/bin/cmake -E cmake_autogen /home/andrey/kursach/build-Simulation-Desktop-Debug/CMakeFiles/Simulation_autogen.dir/AutogenInfo.json Debug

Simulation_autogen: CMakeFiles/Simulation_autogen
Simulation_autogen: CMakeFiles/Simulation_autogen.dir/build.make
.PHONY : Simulation_autogen

# Rule to build all files generated by this target.
CMakeFiles/Simulation_autogen.dir/build: Simulation_autogen
.PHONY : CMakeFiles/Simulation_autogen.dir/build

CMakeFiles/Simulation_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Simulation_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Simulation_autogen.dir/clean

CMakeFiles/Simulation_autogen.dir/depend:
	cd /home/andrey/kursach/build-Simulation-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/andrey/kursach/Simulation /home/andrey/kursach/Simulation /home/andrey/kursach/build-Simulation-Desktop-Debug /home/andrey/kursach/build-Simulation-Desktop-Debug /home/andrey/kursach/build-Simulation-Desktop-Debug/CMakeFiles/Simulation_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Simulation_autogen.dir/depend

