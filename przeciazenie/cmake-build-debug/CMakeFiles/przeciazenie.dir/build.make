# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Admin\CLionProjects\JiPP2\przeciazenie

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Admin\CLionProjects\JiPP2\przeciazenie\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/przeciazenie.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/przeciazenie.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/przeciazenie.dir/flags.make

CMakeFiles/przeciazenie.dir/main.cpp.obj: CMakeFiles/przeciazenie.dir/flags.make
CMakeFiles/przeciazenie.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Admin\CLionProjects\JiPP2\przeciazenie\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/przeciazenie.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\przeciazenie.dir\main.cpp.obj -c C:\Users\Admin\CLionProjects\JiPP2\przeciazenie\main.cpp

CMakeFiles/przeciazenie.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/przeciazenie.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Admin\CLionProjects\JiPP2\przeciazenie\main.cpp > CMakeFiles\przeciazenie.dir\main.cpp.i

CMakeFiles/przeciazenie.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/przeciazenie.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Admin\CLionProjects\JiPP2\przeciazenie\main.cpp -o CMakeFiles\przeciazenie.dir\main.cpp.s

# Object files for target przeciazenie
przeciazenie_OBJECTS = \
"CMakeFiles/przeciazenie.dir/main.cpp.obj"

# External object files for target przeciazenie
przeciazenie_EXTERNAL_OBJECTS =

przeciazenie.exe: CMakeFiles/przeciazenie.dir/main.cpp.obj
przeciazenie.exe: CMakeFiles/przeciazenie.dir/build.make
przeciazenie.exe: CMakeFiles/przeciazenie.dir/linklibs.rsp
przeciazenie.exe: CMakeFiles/przeciazenie.dir/objects1.rsp
przeciazenie.exe: CMakeFiles/przeciazenie.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Admin\CLionProjects\JiPP2\przeciazenie\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable przeciazenie.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\przeciazenie.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/przeciazenie.dir/build: przeciazenie.exe
.PHONY : CMakeFiles/przeciazenie.dir/build

CMakeFiles/przeciazenie.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\przeciazenie.dir\cmake_clean.cmake
.PHONY : CMakeFiles/przeciazenie.dir/clean

CMakeFiles/przeciazenie.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Admin\CLionProjects\JiPP2\przeciazenie C:\Users\Admin\CLionProjects\JiPP2\przeciazenie C:\Users\Admin\CLionProjects\JiPP2\przeciazenie\cmake-build-debug C:\Users\Admin\CLionProjects\JiPP2\przeciazenie\cmake-build-debug C:\Users\Admin\CLionProjects\JiPP2\przeciazenie\cmake-build-debug\CMakeFiles\przeciazenie.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/przeciazenie.dir/depend
