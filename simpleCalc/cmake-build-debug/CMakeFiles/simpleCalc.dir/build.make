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
CMAKE_SOURCE_DIR = C:\Users\Admin\CLionProjects\JiPP2\simpleCalc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Admin\CLionProjects\JiPP2\simpleCalc\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/simpleCalc.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/simpleCalc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/simpleCalc.dir/flags.make

CMakeFiles/simpleCalc.dir/src/calc.cpp.obj: CMakeFiles/simpleCalc.dir/flags.make
CMakeFiles/simpleCalc.dir/src/calc.cpp.obj: ../src/calc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Admin\CLionProjects\JiPP2\simpleCalc\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/simpleCalc.dir/src/calc.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\simpleCalc.dir\src\calc.cpp.obj -c C:\Users\Admin\CLionProjects\JiPP2\simpleCalc\src\calc.cpp

CMakeFiles/simpleCalc.dir/src/calc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simpleCalc.dir/src/calc.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Admin\CLionProjects\JiPP2\simpleCalc\src\calc.cpp > CMakeFiles\simpleCalc.dir\src\calc.cpp.i

CMakeFiles/simpleCalc.dir/src/calc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simpleCalc.dir/src/calc.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Admin\CLionProjects\JiPP2\simpleCalc\src\calc.cpp -o CMakeFiles\simpleCalc.dir\src\calc.cpp.s

CMakeFiles/simpleCalc.dir/src/main.cpp.obj: CMakeFiles/simpleCalc.dir/flags.make
CMakeFiles/simpleCalc.dir/src/main.cpp.obj: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Admin\CLionProjects\JiPP2\simpleCalc\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/simpleCalc.dir/src/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\simpleCalc.dir\src\main.cpp.obj -c C:\Users\Admin\CLionProjects\JiPP2\simpleCalc\src\main.cpp

CMakeFiles/simpleCalc.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simpleCalc.dir/src/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Admin\CLionProjects\JiPP2\simpleCalc\src\main.cpp > CMakeFiles\simpleCalc.dir\src\main.cpp.i

CMakeFiles/simpleCalc.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simpleCalc.dir/src/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Admin\CLionProjects\JiPP2\simpleCalc\src\main.cpp -o CMakeFiles\simpleCalc.dir\src\main.cpp.s

# Object files for target simpleCalc
simpleCalc_OBJECTS = \
"CMakeFiles/simpleCalc.dir/src/calc.cpp.obj" \
"CMakeFiles/simpleCalc.dir/src/main.cpp.obj"

# External object files for target simpleCalc
simpleCalc_EXTERNAL_OBJECTS =

simpleCalc.exe: CMakeFiles/simpleCalc.dir/src/calc.cpp.obj
simpleCalc.exe: CMakeFiles/simpleCalc.dir/src/main.cpp.obj
simpleCalc.exe: CMakeFiles/simpleCalc.dir/build.make
simpleCalc.exe: CMakeFiles/simpleCalc.dir/linklibs.rsp
simpleCalc.exe: CMakeFiles/simpleCalc.dir/objects1.rsp
simpleCalc.exe: CMakeFiles/simpleCalc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Admin\CLionProjects\JiPP2\simpleCalc\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable simpleCalc.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\simpleCalc.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/simpleCalc.dir/build: simpleCalc.exe
.PHONY : CMakeFiles/simpleCalc.dir/build

CMakeFiles/simpleCalc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\simpleCalc.dir\cmake_clean.cmake
.PHONY : CMakeFiles/simpleCalc.dir/clean

CMakeFiles/simpleCalc.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Admin\CLionProjects\JiPP2\simpleCalc C:\Users\Admin\CLionProjects\JiPP2\simpleCalc C:\Users\Admin\CLionProjects\JiPP2\simpleCalc\cmake-build-debug C:\Users\Admin\CLionProjects\JiPP2\simpleCalc\cmake-build-debug C:\Users\Admin\CLionProjects\JiPP2\simpleCalc\cmake-build-debug\CMakeFiles\simpleCalc.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/simpleCalc.dir/depend

