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
include CMakeFiles/dayconcotongbangs.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dayconcotongbangs.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dayconcotongbangs.dir/flags.make

CMakeFiles/dayconcotongbangs.dir/dayconcotongbangs.cpp.obj: CMakeFiles/dayconcotongbangs.dir/flags.make
CMakeFiles/dayconcotongbangs.dir/dayconcotongbangs.cpp.obj: ../dayconcotongbangs.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dayconcotongbangs.dir/dayconcotongbangs.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\dayconcotongbangs.dir\dayconcotongbangs.cpp.obj -c "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\dayconcotongbangs.cpp"

CMakeFiles/dayconcotongbangs.dir/dayconcotongbangs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dayconcotongbangs.dir/dayconcotongbangs.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\dayconcotongbangs.cpp" > CMakeFiles\dayconcotongbangs.dir\dayconcotongbangs.cpp.i

CMakeFiles/dayconcotongbangs.dir/dayconcotongbangs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dayconcotongbangs.dir/dayconcotongbangs.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\dayconcotongbangs.cpp" -o CMakeFiles\dayconcotongbangs.dir\dayconcotongbangs.cpp.s

# Object files for target dayconcotongbangs
dayconcotongbangs_OBJECTS = \
"CMakeFiles/dayconcotongbangs.dir/dayconcotongbangs.cpp.obj"

# External object files for target dayconcotongbangs
dayconcotongbangs_EXTERNAL_OBJECTS =

dayconcotongbangs.exe: CMakeFiles/dayconcotongbangs.dir/dayconcotongbangs.cpp.obj
dayconcotongbangs.exe: CMakeFiles/dayconcotongbangs.dir/build.make
dayconcotongbangs.exe: CMakeFiles/dayconcotongbangs.dir/linklibs.rsp
dayconcotongbangs.exe: CMakeFiles/dayconcotongbangs.dir/objects1.rsp
dayconcotongbangs.exe: CMakeFiles/dayconcotongbangs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable dayconcotongbangs.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\dayconcotongbangs.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dayconcotongbangs.dir/build: dayconcotongbangs.exe

.PHONY : CMakeFiles/dayconcotongbangs.dir/build

CMakeFiles/dayconcotongbangs.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\dayconcotongbangs.dir\cmake_clean.cmake
.PHONY : CMakeFiles/dayconcotongbangs.dir/clean

CMakeFiles/dayconcotongbangs.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug\CMakeFiles\dayconcotongbangs.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/dayconcotongbangs.dir/depend
