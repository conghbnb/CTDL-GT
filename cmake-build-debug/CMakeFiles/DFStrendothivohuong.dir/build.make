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
include CMakeFiles/DFStrendothivohuong.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DFStrendothivohuong.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DFStrendothivohuong.dir/flags.make

CMakeFiles/DFStrendothivohuong.dir/DFStrendothivohuong.cpp.obj: CMakeFiles/DFStrendothivohuong.dir/flags.make
CMakeFiles/DFStrendothivohuong.dir/DFStrendothivohuong.cpp.obj: ../DFStrendothivohuong.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DFStrendothivohuong.dir/DFStrendothivohuong.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\DFStrendothivohuong.dir\DFStrendothivohuong.cpp.obj -c "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\DFStrendothivohuong.cpp"

CMakeFiles/DFStrendothivohuong.dir/DFStrendothivohuong.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DFStrendothivohuong.dir/DFStrendothivohuong.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\DFStrendothivohuong.cpp" > CMakeFiles\DFStrendothivohuong.dir\DFStrendothivohuong.cpp.i

CMakeFiles/DFStrendothivohuong.dir/DFStrendothivohuong.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DFStrendothivohuong.dir/DFStrendothivohuong.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\DFStrendothivohuong.cpp" -o CMakeFiles\DFStrendothivohuong.dir\DFStrendothivohuong.cpp.s

# Object files for target DFStrendothivohuong
DFStrendothivohuong_OBJECTS = \
"CMakeFiles/DFStrendothivohuong.dir/DFStrendothivohuong.cpp.obj"

# External object files for target DFStrendothivohuong
DFStrendothivohuong_EXTERNAL_OBJECTS =

DFStrendothivohuong.exe: CMakeFiles/DFStrendothivohuong.dir/DFStrendothivohuong.cpp.obj
DFStrendothivohuong.exe: CMakeFiles/DFStrendothivohuong.dir/build.make
DFStrendothivohuong.exe: CMakeFiles/DFStrendothivohuong.dir/linklibs.rsp
DFStrendothivohuong.exe: CMakeFiles/DFStrendothivohuong.dir/objects1.rsp
DFStrendothivohuong.exe: CMakeFiles/DFStrendothivohuong.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DFStrendothivohuong.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\DFStrendothivohuong.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DFStrendothivohuong.dir/build: DFStrendothivohuong.exe

.PHONY : CMakeFiles/DFStrendothivohuong.dir/build

CMakeFiles/DFStrendothivohuong.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\DFStrendothivohuong.dir\cmake_clean.cmake
.PHONY : CMakeFiles/DFStrendothivohuong.dir/clean

CMakeFiles/DFStrendothivohuong.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug\CMakeFiles\DFStrendothivohuong.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/DFStrendothivohuong.dir/depend

