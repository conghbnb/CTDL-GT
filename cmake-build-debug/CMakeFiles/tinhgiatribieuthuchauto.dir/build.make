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
include CMakeFiles/tinhgiatribieuthuchauto.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tinhgiatribieuthuchauto.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tinhgiatribieuthuchauto.dir/flags.make

CMakeFiles/tinhgiatribieuthuchauto.dir/tinhgiatribieuthuchauto.cpp.obj: CMakeFiles/tinhgiatribieuthuchauto.dir/flags.make
CMakeFiles/tinhgiatribieuthuchauto.dir/tinhgiatribieuthuchauto.cpp.obj: ../tinhgiatribieuthuchauto.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tinhgiatribieuthuchauto.dir/tinhgiatribieuthuchauto.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\tinhgiatribieuthuchauto.dir\tinhgiatribieuthuchauto.cpp.obj -c "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\tinhgiatribieuthuchauto.cpp"

CMakeFiles/tinhgiatribieuthuchauto.dir/tinhgiatribieuthuchauto.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tinhgiatribieuthuchauto.dir/tinhgiatribieuthuchauto.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\tinhgiatribieuthuchauto.cpp" > CMakeFiles\tinhgiatribieuthuchauto.dir\tinhgiatribieuthuchauto.cpp.i

CMakeFiles/tinhgiatribieuthuchauto.dir/tinhgiatribieuthuchauto.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tinhgiatribieuthuchauto.dir/tinhgiatribieuthuchauto.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\tinhgiatribieuthuchauto.cpp" -o CMakeFiles\tinhgiatribieuthuchauto.dir\tinhgiatribieuthuchauto.cpp.s

# Object files for target tinhgiatribieuthuchauto
tinhgiatribieuthuchauto_OBJECTS = \
"CMakeFiles/tinhgiatribieuthuchauto.dir/tinhgiatribieuthuchauto.cpp.obj"

# External object files for target tinhgiatribieuthuchauto
tinhgiatribieuthuchauto_EXTERNAL_OBJECTS =

tinhgiatribieuthuchauto.exe: CMakeFiles/tinhgiatribieuthuchauto.dir/tinhgiatribieuthuchauto.cpp.obj
tinhgiatribieuthuchauto.exe: CMakeFiles/tinhgiatribieuthuchauto.dir/build.make
tinhgiatribieuthuchauto.exe: CMakeFiles/tinhgiatribieuthuchauto.dir/linklibs.rsp
tinhgiatribieuthuchauto.exe: CMakeFiles/tinhgiatribieuthuchauto.dir/objects1.rsp
tinhgiatribieuthuchauto.exe: CMakeFiles/tinhgiatribieuthuchauto.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tinhgiatribieuthuchauto.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\tinhgiatribieuthuchauto.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tinhgiatribieuthuchauto.dir/build: tinhgiatribieuthuchauto.exe

.PHONY : CMakeFiles/tinhgiatribieuthuchauto.dir/build

CMakeFiles/tinhgiatribieuthuchauto.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\tinhgiatribieuthuchauto.dir\cmake_clean.cmake
.PHONY : CMakeFiles/tinhgiatribieuthuchauto.dir/clean

CMakeFiles/tinhgiatribieuthuchauto.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug\CMakeFiles\tinhgiatribieuthuchauto.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/tinhgiatribieuthuchauto.dir/depend

