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
include CMakeFiles/Biendoitientotrungto.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Biendoitientotrungto.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Biendoitientotrungto.dir/flags.make

CMakeFiles/Biendoitientotrungto.dir/Biendoitientotrungto.cpp.obj: CMakeFiles/Biendoitientotrungto.dir/flags.make
CMakeFiles/Biendoitientotrungto.dir/Biendoitientotrungto.cpp.obj: ../Biendoitientotrungto.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Biendoitientotrungto.dir/Biendoitientotrungto.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Biendoitientotrungto.dir\Biendoitientotrungto.cpp.obj -c "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\Biendoitientotrungto.cpp"

CMakeFiles/Biendoitientotrungto.dir/Biendoitientotrungto.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Biendoitientotrungto.dir/Biendoitientotrungto.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\Biendoitientotrungto.cpp" > CMakeFiles\Biendoitientotrungto.dir\Biendoitientotrungto.cpp.i

CMakeFiles/Biendoitientotrungto.dir/Biendoitientotrungto.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Biendoitientotrungto.dir/Biendoitientotrungto.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\Biendoitientotrungto.cpp" -o CMakeFiles\Biendoitientotrungto.dir\Biendoitientotrungto.cpp.s

# Object files for target Biendoitientotrungto
Biendoitientotrungto_OBJECTS = \
"CMakeFiles/Biendoitientotrungto.dir/Biendoitientotrungto.cpp.obj"

# External object files for target Biendoitientotrungto
Biendoitientotrungto_EXTERNAL_OBJECTS =

Biendoitientotrungto.exe: CMakeFiles/Biendoitientotrungto.dir/Biendoitientotrungto.cpp.obj
Biendoitientotrungto.exe: CMakeFiles/Biendoitientotrungto.dir/build.make
Biendoitientotrungto.exe: CMakeFiles/Biendoitientotrungto.dir/linklibs.rsp
Biendoitientotrungto.exe: CMakeFiles/Biendoitientotrungto.dir/objects1.rsp
Biendoitientotrungto.exe: CMakeFiles/Biendoitientotrungto.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Biendoitientotrungto.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Biendoitientotrungto.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Biendoitientotrungto.dir/build: Biendoitientotrungto.exe

.PHONY : CMakeFiles/Biendoitientotrungto.dir/build

CMakeFiles/Biendoitientotrungto.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Biendoitientotrungto.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Biendoitientotrungto.dir/clean

CMakeFiles/Biendoitientotrungto.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug\CMakeFiles\Biendoitientotrungto.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Biendoitientotrungto.dir/depend
