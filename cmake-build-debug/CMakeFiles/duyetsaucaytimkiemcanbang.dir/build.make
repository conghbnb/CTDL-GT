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
include CMakeFiles/duyetsaucaytimkiemcanbang.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/duyetsaucaytimkiemcanbang.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/duyetsaucaytimkiemcanbang.dir/flags.make

CMakeFiles/duyetsaucaytimkiemcanbang.dir/duyetsaucaytimkiemcanbang.cpp.obj: CMakeFiles/duyetsaucaytimkiemcanbang.dir/flags.make
CMakeFiles/duyetsaucaytimkiemcanbang.dir/duyetsaucaytimkiemcanbang.cpp.obj: ../duyetsaucaytimkiemcanbang.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/duyetsaucaytimkiemcanbang.dir/duyetsaucaytimkiemcanbang.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\duyetsaucaytimkiemcanbang.dir\duyetsaucaytimkiemcanbang.cpp.obj -c "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\duyetsaucaytimkiemcanbang.cpp"

CMakeFiles/duyetsaucaytimkiemcanbang.dir/duyetsaucaytimkiemcanbang.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/duyetsaucaytimkiemcanbang.dir/duyetsaucaytimkiemcanbang.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\duyetsaucaytimkiemcanbang.cpp" > CMakeFiles\duyetsaucaytimkiemcanbang.dir\duyetsaucaytimkiemcanbang.cpp.i

CMakeFiles/duyetsaucaytimkiemcanbang.dir/duyetsaucaytimkiemcanbang.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/duyetsaucaytimkiemcanbang.dir/duyetsaucaytimkiemcanbang.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\duyetsaucaytimkiemcanbang.cpp" -o CMakeFiles\duyetsaucaytimkiemcanbang.dir\duyetsaucaytimkiemcanbang.cpp.s

# Object files for target duyetsaucaytimkiemcanbang
duyetsaucaytimkiemcanbang_OBJECTS = \
"CMakeFiles/duyetsaucaytimkiemcanbang.dir/duyetsaucaytimkiemcanbang.cpp.obj"

# External object files for target duyetsaucaytimkiemcanbang
duyetsaucaytimkiemcanbang_EXTERNAL_OBJECTS =

duyetsaucaytimkiemcanbang.exe: CMakeFiles/duyetsaucaytimkiemcanbang.dir/duyetsaucaytimkiemcanbang.cpp.obj
duyetsaucaytimkiemcanbang.exe: CMakeFiles/duyetsaucaytimkiemcanbang.dir/build.make
duyetsaucaytimkiemcanbang.exe: CMakeFiles/duyetsaucaytimkiemcanbang.dir/linklibs.rsp
duyetsaucaytimkiemcanbang.exe: CMakeFiles/duyetsaucaytimkiemcanbang.dir/objects1.rsp
duyetsaucaytimkiemcanbang.exe: CMakeFiles/duyetsaucaytimkiemcanbang.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable duyetsaucaytimkiemcanbang.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\duyetsaucaytimkiemcanbang.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/duyetsaucaytimkiemcanbang.dir/build: duyetsaucaytimkiemcanbang.exe

.PHONY : CMakeFiles/duyetsaucaytimkiemcanbang.dir/build

CMakeFiles/duyetsaucaytimkiemcanbang.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\duyetsaucaytimkiemcanbang.dir\cmake_clean.cmake
.PHONY : CMakeFiles/duyetsaucaytimkiemcanbang.dir/clean

CMakeFiles/duyetsaucaytimkiemcanbang.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug\CMakeFiles\duyetsaucaytimkiemcanbang.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/duyetsaucaytimkiemcanbang.dir/depend

