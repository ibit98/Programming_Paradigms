# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\INDRANIL\Downloads\4th Sem\Prog\a1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\INDRANIL\Downloads\4th Sem\Prog\a1\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/a1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/a1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/a1.dir/flags.make

CMakeFiles/a1.dir/a10.c.obj: CMakeFiles/a1.dir/flags.make
CMakeFiles/a1.dir/a10.c.obj: ../a10.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\INDRANIL\Downloads\4th Sem\Prog\a1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/a1.dir/a10.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\a1.dir\a10.c.obj   -c "C:\Users\INDRANIL\Downloads\4th Sem\Prog\a1\a10.c"

CMakeFiles/a1.dir/a10.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/a1.dir/a10.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\INDRANIL\Downloads\4th Sem\Prog\a1\a10.c" > CMakeFiles\a1.dir\a10.c.i

CMakeFiles/a1.dir/a10.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/a1.dir/a10.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\INDRANIL\Downloads\4th Sem\Prog\a1\a10.c" -o CMakeFiles\a1.dir\a10.c.s

# Object files for target a1
a1_OBJECTS = \
"CMakeFiles/a1.dir/a10.c.obj"

# External object files for target a1
a1_EXTERNAL_OBJECTS =

a1.exe: CMakeFiles/a1.dir/a10.c.obj
a1.exe: CMakeFiles/a1.dir/build.make
a1.exe: CMakeFiles/a1.dir/linklibs.rsp
a1.exe: CMakeFiles/a1.dir/objects1.rsp
a1.exe: CMakeFiles/a1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\INDRANIL\Downloads\4th Sem\Prog\a1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable a1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\a1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/a1.dir/build: a1.exe

.PHONY : CMakeFiles/a1.dir/build

CMakeFiles/a1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\a1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/a1.dir/clean

CMakeFiles/a1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\INDRANIL\Downloads\4th Sem\Prog\a1" "C:\Users\INDRANIL\Downloads\4th Sem\Prog\a1" "C:\Users\INDRANIL\Downloads\4th Sem\Prog\a1\cmake-build-debug" "C:\Users\INDRANIL\Downloads\4th Sem\Prog\a1\cmake-build-debug" "C:\Users\INDRANIL\Downloads\4th Sem\Prog\a1\cmake-build-debug\CMakeFiles\a1.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/a1.dir/depend

