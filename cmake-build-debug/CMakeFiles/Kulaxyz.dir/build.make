# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /home/kulaxyz/CLion/clion-2019.1.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/kulaxyz/CLion/clion-2019.1.3/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kulaxyz/CLionProjects/Kulaxyz

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kulaxyz/CLionProjects/Kulaxyz/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Kulaxyz.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Kulaxyz.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Kulaxyz.dir/flags.make

CMakeFiles/Kulaxyz.dir/main.cpp.o: CMakeFiles/Kulaxyz.dir/flags.make
CMakeFiles/Kulaxyz.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kulaxyz/CLionProjects/Kulaxyz/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Kulaxyz.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Kulaxyz.dir/main.cpp.o -c /home/kulaxyz/CLionProjects/Kulaxyz/main.cpp

CMakeFiles/Kulaxyz.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Kulaxyz.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kulaxyz/CLionProjects/Kulaxyz/main.cpp > CMakeFiles/Kulaxyz.dir/main.cpp.i

CMakeFiles/Kulaxyz.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Kulaxyz.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kulaxyz/CLionProjects/Kulaxyz/main.cpp -o CMakeFiles/Kulaxyz.dir/main.cpp.s

CMakeFiles/Kulaxyz.dir/VesselSystem.cpp.o: CMakeFiles/Kulaxyz.dir/flags.make
CMakeFiles/Kulaxyz.dir/VesselSystem.cpp.o: ../VesselSystem.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kulaxyz/CLionProjects/Kulaxyz/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Kulaxyz.dir/VesselSystem.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Kulaxyz.dir/VesselSystem.cpp.o -c /home/kulaxyz/CLionProjects/Kulaxyz/VesselSystem.cpp

CMakeFiles/Kulaxyz.dir/VesselSystem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Kulaxyz.dir/VesselSystem.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kulaxyz/CLionProjects/Kulaxyz/VesselSystem.cpp > CMakeFiles/Kulaxyz.dir/VesselSystem.cpp.i

CMakeFiles/Kulaxyz.dir/VesselSystem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Kulaxyz.dir/VesselSystem.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kulaxyz/CLionProjects/Kulaxyz/VesselSystem.cpp -o CMakeFiles/Kulaxyz.dir/VesselSystem.cpp.s

# Object files for target Kulaxyz
Kulaxyz_OBJECTS = \
"CMakeFiles/Kulaxyz.dir/main.cpp.o" \
"CMakeFiles/Kulaxyz.dir/VesselSystem.cpp.o"

# External object files for target Kulaxyz
Kulaxyz_EXTERNAL_OBJECTS =

Kulaxyz: CMakeFiles/Kulaxyz.dir/main.cpp.o
Kulaxyz: CMakeFiles/Kulaxyz.dir/VesselSystem.cpp.o
Kulaxyz: CMakeFiles/Kulaxyz.dir/build.make
Kulaxyz: CMakeFiles/Kulaxyz.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kulaxyz/CLionProjects/Kulaxyz/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Kulaxyz"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Kulaxyz.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Kulaxyz.dir/build: Kulaxyz

.PHONY : CMakeFiles/Kulaxyz.dir/build

CMakeFiles/Kulaxyz.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Kulaxyz.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Kulaxyz.dir/clean

CMakeFiles/Kulaxyz.dir/depend:
	cd /home/kulaxyz/CLionProjects/Kulaxyz/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kulaxyz/CLionProjects/Kulaxyz /home/kulaxyz/CLionProjects/Kulaxyz /home/kulaxyz/CLionProjects/Kulaxyz/cmake-build-debug /home/kulaxyz/CLionProjects/Kulaxyz/cmake-build-debug /home/kulaxyz/CLionProjects/Kulaxyz/cmake-build-debug/CMakeFiles/Kulaxyz.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Kulaxyz.dir/depend

