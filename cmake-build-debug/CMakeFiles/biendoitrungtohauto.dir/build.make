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
include CMakeFiles/biendoitrungtohauto.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/biendoitrungtohauto.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/biendoitrungtohauto.dir/flags.make

CMakeFiles/biendoitrungtohauto.dir/biendoitrungtohauto.cpp.obj: CMakeFiles/biendoitrungtohauto.dir/flags.make
CMakeFiles/biendoitrungtohauto.dir/biendoitrungtohauto.cpp.obj: ../biendoitrungtohauto.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/biendoitrungtohauto.dir/biendoitrungtohauto.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\biendoitrungtohauto.dir\biendoitrungtohauto.cpp.obj -c "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\biendoitrungtohauto.cpp"

CMakeFiles/biendoitrungtohauto.dir/biendoitrungtohauto.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/biendoitrungtohauto.dir/biendoitrungtohauto.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\biendoitrungtohauto.cpp" > CMakeFiles\biendoitrungtohauto.dir\biendoitrungtohauto.cpp.i

CMakeFiles/biendoitrungtohauto.dir/biendoitrungtohauto.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/biendoitrungtohauto.dir/biendoitrungtohauto.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\biendoitrungtohauto.cpp" -o CMakeFiles\biendoitrungtohauto.dir\biendoitrungtohauto.cpp.s

# Object files for target biendoitrungtohauto
biendoitrungtohauto_OBJECTS = \
"CMakeFiles/biendoitrungtohauto.dir/biendoitrungtohauto.cpp.obj"

# External object files for target biendoitrungtohauto
biendoitrungtohauto_EXTERNAL_OBJECTS =

biendoitrungtohauto.exe: CMakeFiles/biendoitrungtohauto.dir/biendoitrungtohauto.cpp.obj
biendoitrungtohauto.exe: CMakeFiles/biendoitrungtohauto.dir/build.make
biendoitrungtohauto.exe: CMakeFiles/biendoitrungtohauto.dir/linklibs.rsp
biendoitrungtohauto.exe: CMakeFiles/biendoitrungtohauto.dir/objects1.rsp
biendoitrungtohauto.exe: CMakeFiles/biendoitrungtohauto.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable biendoitrungtohauto.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\biendoitrungtohauto.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/biendoitrungtohauto.dir/build: biendoitrungtohauto.exe

.PHONY : CMakeFiles/biendoitrungtohauto.dir/build

CMakeFiles/biendoitrungtohauto.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\biendoitrungtohauto.dir\cmake_clean.cmake
.PHONY : CMakeFiles/biendoitrungtohauto.dir/clean

CMakeFiles/biendoitrungtohauto.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug" "C:\Users\ASUS\Documents\ClionProject\CLionProjects\CTDL&GT\cmake-build-debug\CMakeFiles\biendoitrungtohauto.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/biendoitrungtohauto.dir/depend

