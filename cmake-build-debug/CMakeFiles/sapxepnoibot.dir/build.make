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
include CMakeFiles/sapxepnoibot.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sapxepnoibot.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sapxepnoibot.dir/flags.make

CMakeFiles/sapxepnoibot.dir/sapxepnoibot.cpp.obj: CMakeFiles/sapxepnoibot.dir/flags.make
CMakeFiles/sapxepnoibot.dir/sapxepnoibot.cpp.obj: ../sapxepnoibot.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sapxepnoibot.dir/sapxepnoibot.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\sapxepnoibot.dir\sapxepnoibot.cpp.obj -c "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\sapxepnoibot.cpp"

CMakeFiles/sapxepnoibot.dir/sapxepnoibot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sapxepnoibot.dir/sapxepnoibot.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\sapxepnoibot.cpp" > CMakeFiles\sapxepnoibot.dir\sapxepnoibot.cpp.i

CMakeFiles/sapxepnoibot.dir/sapxepnoibot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sapxepnoibot.dir/sapxepnoibot.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\sapxepnoibot.cpp" -o CMakeFiles\sapxepnoibot.dir\sapxepnoibot.cpp.s

# Object files for target sapxepnoibot
sapxepnoibot_OBJECTS = \
"CMakeFiles/sapxepnoibot.dir/sapxepnoibot.cpp.obj"

# External object files for target sapxepnoibot
sapxepnoibot_EXTERNAL_OBJECTS =

sapxepnoibot.exe: CMakeFiles/sapxepnoibot.dir/sapxepnoibot.cpp.obj
sapxepnoibot.exe: CMakeFiles/sapxepnoibot.dir/build.make
sapxepnoibot.exe: CMakeFiles/sapxepnoibot.dir/linklibs.rsp
sapxepnoibot.exe: CMakeFiles/sapxepnoibot.dir/objects1.rsp
sapxepnoibot.exe: CMakeFiles/sapxepnoibot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sapxepnoibot.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\sapxepnoibot.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sapxepnoibot.dir/build: sapxepnoibot.exe

.PHONY : CMakeFiles/sapxepnoibot.dir/build

CMakeFiles/sapxepnoibot.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\sapxepnoibot.dir\cmake_clean.cmake
.PHONY : CMakeFiles/sapxepnoibot.dir/clean

CMakeFiles/sapxepnoibot.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug\CMakeFiles\sapxepnoibot.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/sapxepnoibot.dir/depend
