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
include CMakeFiles/phantichso.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/phantichso.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/phantichso.dir/flags.make

CMakeFiles/phantichso.dir/phantichso.cpp.obj: CMakeFiles/phantichso.dir/flags.make
CMakeFiles/phantichso.dir/phantichso.cpp.obj: ../phantichso.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/phantichso.dir/phantichso.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\phantichso.dir\phantichso.cpp.obj -c "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\phantichso.cpp"

CMakeFiles/phantichso.dir/phantichso.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/phantichso.dir/phantichso.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\phantichso.cpp" > CMakeFiles\phantichso.dir\phantichso.cpp.i

CMakeFiles/phantichso.dir/phantichso.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/phantichso.dir/phantichso.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\phantichso.cpp" -o CMakeFiles\phantichso.dir\phantichso.cpp.s

# Object files for target phantichso
phantichso_OBJECTS = \
"CMakeFiles/phantichso.dir/phantichso.cpp.obj"

# External object files for target phantichso
phantichso_EXTERNAL_OBJECTS =

phantichso.exe: CMakeFiles/phantichso.dir/phantichso.cpp.obj
phantichso.exe: CMakeFiles/phantichso.dir/build.make
phantichso.exe: CMakeFiles/phantichso.dir/linklibs.rsp
phantichso.exe: CMakeFiles/phantichso.dir/objects1.rsp
phantichso.exe: CMakeFiles/phantichso.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable phantichso.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\phantichso.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/phantichso.dir/build: phantichso.exe

.PHONY : CMakeFiles/phantichso.dir/build

CMakeFiles/phantichso.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\phantichso.dir\cmake_clean.cmake
.PHONY : CMakeFiles/phantichso.dir/clean

CMakeFiles/phantichso.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug\CMakeFiles\phantichso.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/phantichso.dir/depend

