# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/dayxaufibonacci.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dayxaufibonacci.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dayxaufibonacci.dir/flags.make

CMakeFiles/dayxaufibonacci.dir/dayxaufibonacci.cpp.obj: CMakeFiles/dayxaufibonacci.dir/flags.make
CMakeFiles/dayxaufibonacci.dir/dayxaufibonacci.cpp.obj: ../dayxaufibonacci.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dayxaufibonacci.dir/dayxaufibonacci.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\dayxaufibonacci.dir\dayxaufibonacci.cpp.obj -c "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\dayxaufibonacci.cpp"

CMakeFiles/dayxaufibonacci.dir/dayxaufibonacci.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dayxaufibonacci.dir/dayxaufibonacci.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\dayxaufibonacci.cpp" > CMakeFiles\dayxaufibonacci.dir\dayxaufibonacci.cpp.i

CMakeFiles/dayxaufibonacci.dir/dayxaufibonacci.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dayxaufibonacci.dir/dayxaufibonacci.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\dayxaufibonacci.cpp" -o CMakeFiles\dayxaufibonacci.dir\dayxaufibonacci.cpp.s

# Object files for target dayxaufibonacci
dayxaufibonacci_OBJECTS = \
"CMakeFiles/dayxaufibonacci.dir/dayxaufibonacci.cpp.obj"

# External object files for target dayxaufibonacci
dayxaufibonacci_EXTERNAL_OBJECTS =

dayxaufibonacci.exe: CMakeFiles/dayxaufibonacci.dir/dayxaufibonacci.cpp.obj
dayxaufibonacci.exe: CMakeFiles/dayxaufibonacci.dir/build.make
dayxaufibonacci.exe: CMakeFiles/dayxaufibonacci.dir/linklibs.rsp
dayxaufibonacci.exe: CMakeFiles/dayxaufibonacci.dir/objects1.rsp
dayxaufibonacci.exe: CMakeFiles/dayxaufibonacci.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable dayxaufibonacci.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\dayxaufibonacci.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dayxaufibonacci.dir/build: dayxaufibonacci.exe

.PHONY : CMakeFiles/dayxaufibonacci.dir/build

CMakeFiles/dayxaufibonacci.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\dayxaufibonacci.dir\cmake_clean.cmake
.PHONY : CMakeFiles/dayxaufibonacci.dir/clean

CMakeFiles/dayxaufibonacci.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug\CMakeFiles\dayxaufibonacci.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/dayxaufibonacci.dir/depend
