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
include CMakeFiles/dayconchung.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dayconchung.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dayconchung.dir/flags.make

CMakeFiles/dayconchung.dir/dayconchung.cpp.obj: CMakeFiles/dayconchung.dir/flags.make
CMakeFiles/dayconchung.dir/dayconchung.cpp.obj: ../dayconchung.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dayconchung.dir/dayconchung.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\dayconchung.dir\dayconchung.cpp.obj -c "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\dayconchung.cpp"

CMakeFiles/dayconchung.dir/dayconchung.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dayconchung.dir/dayconchung.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\dayconchung.cpp" > CMakeFiles\dayconchung.dir\dayconchung.cpp.i

CMakeFiles/dayconchung.dir/dayconchung.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dayconchung.dir/dayconchung.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\dayconchung.cpp" -o CMakeFiles\dayconchung.dir\dayconchung.cpp.s

# Object files for target dayconchung
dayconchung_OBJECTS = \
"CMakeFiles/dayconchung.dir/dayconchung.cpp.obj"

# External object files for target dayconchung
dayconchung_EXTERNAL_OBJECTS =

dayconchung.exe: CMakeFiles/dayconchung.dir/dayconchung.cpp.obj
dayconchung.exe: CMakeFiles/dayconchung.dir/build.make
dayconchung.exe: CMakeFiles/dayconchung.dir/linklibs.rsp
dayconchung.exe: CMakeFiles/dayconchung.dir/objects1.rsp
dayconchung.exe: CMakeFiles/dayconchung.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable dayconchung.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\dayconchung.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dayconchung.dir/build: dayconchung.exe

.PHONY : CMakeFiles/dayconchung.dir/build

CMakeFiles/dayconchung.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\dayconchung.dir\cmake_clean.cmake
.PHONY : CMakeFiles/dayconchung.dir/clean

CMakeFiles/dayconchung.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug\CMakeFiles\dayconchung.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/dayconchung.dir/depend
