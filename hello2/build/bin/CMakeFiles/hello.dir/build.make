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
CMAKE_SOURCE_DIR = /home/wen/Desktop/Projects/c_demo_linux/hello2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wen/Desktop/Projects/c_demo_linux/hello2/build

# Include any dependencies generated for this target.
include bin/CMakeFiles/hello.dir/depend.make

# Include the progress variables for this target.
include bin/CMakeFiles/hello.dir/progress.make

# Include the compile flags for this target's objects.
include bin/CMakeFiles/hello.dir/flags.make

bin/CMakeFiles/hello.dir/hello.c.o: bin/CMakeFiles/hello.dir/flags.make
bin/CMakeFiles/hello.dir/hello.c.o: ../src/hello.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wen/Desktop/Projects/c_demo_linux/hello2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object bin/CMakeFiles/hello.dir/hello.c.o"
	cd /home/wen/Desktop/Projects/c_demo_linux/hello2/build/bin && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hello.dir/hello.c.o   -c /home/wen/Desktop/Projects/c_demo_linux/hello2/src/hello.c

bin/CMakeFiles/hello.dir/hello.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hello.dir/hello.c.i"
	cd /home/wen/Desktop/Projects/c_demo_linux/hello2/build/bin && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/wen/Desktop/Projects/c_demo_linux/hello2/src/hello.c > CMakeFiles/hello.dir/hello.c.i

bin/CMakeFiles/hello.dir/hello.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hello.dir/hello.c.s"
	cd /home/wen/Desktop/Projects/c_demo_linux/hello2/build/bin && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/wen/Desktop/Projects/c_demo_linux/hello2/src/hello.c -o CMakeFiles/hello.dir/hello.c.s

# Object files for target hello
hello_OBJECTS = \
"CMakeFiles/hello.dir/hello.c.o"

# External object files for target hello
hello_EXTERNAL_OBJECTS =

bin/hello: bin/CMakeFiles/hello.dir/hello.c.o
bin/hello: bin/CMakeFiles/hello.dir/build.make
bin/hello: bin/CMakeFiles/hello.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wen/Desktop/Projects/c_demo_linux/hello2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable hello"
	cd /home/wen/Desktop/Projects/c_demo_linux/hello2/build/bin && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hello.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
bin/CMakeFiles/hello.dir/build: bin/hello

.PHONY : bin/CMakeFiles/hello.dir/build

bin/CMakeFiles/hello.dir/clean:
	cd /home/wen/Desktop/Projects/c_demo_linux/hello2/build/bin && $(CMAKE_COMMAND) -P CMakeFiles/hello.dir/cmake_clean.cmake
.PHONY : bin/CMakeFiles/hello.dir/clean

bin/CMakeFiles/hello.dir/depend:
	cd /home/wen/Desktop/Projects/c_demo_linux/hello2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wen/Desktop/Projects/c_demo_linux/hello2 /home/wen/Desktop/Projects/c_demo_linux/hello2/src /home/wen/Desktop/Projects/c_demo_linux/hello2/build /home/wen/Desktop/Projects/c_demo_linux/hello2/build/bin /home/wen/Desktop/Projects/c_demo_linux/hello2/build/bin/CMakeFiles/hello.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : bin/CMakeFiles/hello.dir/depend

