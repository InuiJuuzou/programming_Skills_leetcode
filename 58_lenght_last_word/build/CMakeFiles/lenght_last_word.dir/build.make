# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /home/kanella/dvops/programming_Skills_leetcode/58_lenght_last_word

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kanella/dvops/programming_Skills_leetcode/58_lenght_last_word/build

# Include any dependencies generated for this target.
include CMakeFiles/lenght_last_word.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/lenght_last_word.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/lenght_last_word.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lenght_last_word.dir/flags.make

CMakeFiles/lenght_last_word.dir/main.cpp.o: CMakeFiles/lenght_last_word.dir/flags.make
CMakeFiles/lenght_last_word.dir/main.cpp.o: /home/kanella/dvops/programming_Skills_leetcode/58_lenght_last_word/main.cpp
CMakeFiles/lenght_last_word.dir/main.cpp.o: CMakeFiles/lenght_last_word.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/kanella/dvops/programming_Skills_leetcode/58_lenght_last_word/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lenght_last_word.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lenght_last_word.dir/main.cpp.o -MF CMakeFiles/lenght_last_word.dir/main.cpp.o.d -o CMakeFiles/lenght_last_word.dir/main.cpp.o -c /home/kanella/dvops/programming_Skills_leetcode/58_lenght_last_word/main.cpp

CMakeFiles/lenght_last_word.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/lenght_last_word.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kanella/dvops/programming_Skills_leetcode/58_lenght_last_word/main.cpp > CMakeFiles/lenght_last_word.dir/main.cpp.i

CMakeFiles/lenght_last_word.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/lenght_last_word.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kanella/dvops/programming_Skills_leetcode/58_lenght_last_word/main.cpp -o CMakeFiles/lenght_last_word.dir/main.cpp.s

# Object files for target lenght_last_word
lenght_last_word_OBJECTS = \
"CMakeFiles/lenght_last_word.dir/main.cpp.o"

# External object files for target lenght_last_word
lenght_last_word_EXTERNAL_OBJECTS =

lenght_last_word: CMakeFiles/lenght_last_word.dir/main.cpp.o
lenght_last_word: CMakeFiles/lenght_last_word.dir/build.make
lenght_last_word: CMakeFiles/lenght_last_word.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/kanella/dvops/programming_Skills_leetcode/58_lenght_last_word/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lenght_last_word"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lenght_last_word.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lenght_last_word.dir/build: lenght_last_word
.PHONY : CMakeFiles/lenght_last_word.dir/build

CMakeFiles/lenght_last_word.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lenght_last_word.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lenght_last_word.dir/clean

CMakeFiles/lenght_last_word.dir/depend:
	cd /home/kanella/dvops/programming_Skills_leetcode/58_lenght_last_word/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kanella/dvops/programming_Skills_leetcode/58_lenght_last_word /home/kanella/dvops/programming_Skills_leetcode/58_lenght_last_word /home/kanella/dvops/programming_Skills_leetcode/58_lenght_last_word/build /home/kanella/dvops/programming_Skills_leetcode/58_lenght_last_word/build /home/kanella/dvops/programming_Skills_leetcode/58_lenght_last_word/build/CMakeFiles/lenght_last_word.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/lenght_last_word.dir/depend

