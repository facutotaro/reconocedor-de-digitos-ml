# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lucas/Desktop/MetNum/TP/TP2/metnum_tp2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lucas/Desktop/MetNum/TP/TP2/metnum_tp2/build

# Include any dependencies generated for this target.
include CMakeFiles/metnum.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/metnum.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/metnum.dir/flags.make

CMakeFiles/metnum.dir/src/metnum.cpp.o: CMakeFiles/metnum.dir/flags.make
CMakeFiles/metnum.dir/src/metnum.cpp.o: ../src/metnum.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucas/Desktop/MetNum/TP/TP2/metnum_tp2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/metnum.dir/src/metnum.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/metnum.dir/src/metnum.cpp.o -c /home/lucas/Desktop/MetNum/TP/TP2/metnum_tp2/src/metnum.cpp

CMakeFiles/metnum.dir/src/metnum.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/metnum.dir/src/metnum.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucas/Desktop/MetNum/TP/TP2/metnum_tp2/src/metnum.cpp > CMakeFiles/metnum.dir/src/metnum.cpp.i

CMakeFiles/metnum.dir/src/metnum.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/metnum.dir/src/metnum.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucas/Desktop/MetNum/TP/TP2/metnum_tp2/src/metnum.cpp -o CMakeFiles/metnum.dir/src/metnum.cpp.s

CMakeFiles/metnum.dir/src/knn.cpp.o: CMakeFiles/metnum.dir/flags.make
CMakeFiles/metnum.dir/src/knn.cpp.o: ../src/knn.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucas/Desktop/MetNum/TP/TP2/metnum_tp2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/metnum.dir/src/knn.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/metnum.dir/src/knn.cpp.o -c /home/lucas/Desktop/MetNum/TP/TP2/metnum_tp2/src/knn.cpp

CMakeFiles/metnum.dir/src/knn.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/metnum.dir/src/knn.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucas/Desktop/MetNum/TP/TP2/metnum_tp2/src/knn.cpp > CMakeFiles/metnum.dir/src/knn.cpp.i

CMakeFiles/metnum.dir/src/knn.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/metnum.dir/src/knn.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucas/Desktop/MetNum/TP/TP2/metnum_tp2/src/knn.cpp -o CMakeFiles/metnum.dir/src/knn.cpp.s

CMakeFiles/metnum.dir/src/pca.cpp.o: CMakeFiles/metnum.dir/flags.make
CMakeFiles/metnum.dir/src/pca.cpp.o: ../src/pca.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucas/Desktop/MetNum/TP/TP2/metnum_tp2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/metnum.dir/src/pca.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/metnum.dir/src/pca.cpp.o -c /home/lucas/Desktop/MetNum/TP/TP2/metnum_tp2/src/pca.cpp

CMakeFiles/metnum.dir/src/pca.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/metnum.dir/src/pca.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucas/Desktop/MetNum/TP/TP2/metnum_tp2/src/pca.cpp > CMakeFiles/metnum.dir/src/pca.cpp.i

CMakeFiles/metnum.dir/src/pca.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/metnum.dir/src/pca.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucas/Desktop/MetNum/TP/TP2/metnum_tp2/src/pca.cpp -o CMakeFiles/metnum.dir/src/pca.cpp.s

CMakeFiles/metnum.dir/src/eigen.cpp.o: CMakeFiles/metnum.dir/flags.make
CMakeFiles/metnum.dir/src/eigen.cpp.o: ../src/eigen.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucas/Desktop/MetNum/TP/TP2/metnum_tp2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/metnum.dir/src/eigen.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/metnum.dir/src/eigen.cpp.o -c /home/lucas/Desktop/MetNum/TP/TP2/metnum_tp2/src/eigen.cpp

CMakeFiles/metnum.dir/src/eigen.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/metnum.dir/src/eigen.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucas/Desktop/MetNum/TP/TP2/metnum_tp2/src/eigen.cpp > CMakeFiles/metnum.dir/src/eigen.cpp.i

CMakeFiles/metnum.dir/src/eigen.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/metnum.dir/src/eigen.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucas/Desktop/MetNum/TP/TP2/metnum_tp2/src/eigen.cpp -o CMakeFiles/metnum.dir/src/eigen.cpp.s

# Object files for target metnum
metnum_OBJECTS = \
"CMakeFiles/metnum.dir/src/metnum.cpp.o" \
"CMakeFiles/metnum.dir/src/knn.cpp.o" \
"CMakeFiles/metnum.dir/src/pca.cpp.o" \
"CMakeFiles/metnum.dir/src/eigen.cpp.o"

# External object files for target metnum
metnum_EXTERNAL_OBJECTS =

metnum.cpython-38-x86_64-linux-gnu.so: CMakeFiles/metnum.dir/src/metnum.cpp.o
metnum.cpython-38-x86_64-linux-gnu.so: CMakeFiles/metnum.dir/src/knn.cpp.o
metnum.cpython-38-x86_64-linux-gnu.so: CMakeFiles/metnum.dir/src/pca.cpp.o
metnum.cpython-38-x86_64-linux-gnu.so: CMakeFiles/metnum.dir/src/eigen.cpp.o
metnum.cpython-38-x86_64-linux-gnu.so: CMakeFiles/metnum.dir/build.make
metnum.cpython-38-x86_64-linux-gnu.so: CMakeFiles/metnum.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lucas/Desktop/MetNum/TP/TP2/metnum_tp2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX shared module metnum.cpython-38-x86_64-linux-gnu.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/metnum.dir/link.txt --verbose=$(VERBOSE)
	/usr/bin/strip /home/lucas/Desktop/MetNum/TP/TP2/metnum_tp2/build/metnum.cpython-38-x86_64-linux-gnu.so

# Rule to build all files generated by this target.
CMakeFiles/metnum.dir/build: metnum.cpython-38-x86_64-linux-gnu.so

.PHONY : CMakeFiles/metnum.dir/build

CMakeFiles/metnum.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/metnum.dir/cmake_clean.cmake
.PHONY : CMakeFiles/metnum.dir/clean

CMakeFiles/metnum.dir/depend:
	cd /home/lucas/Desktop/MetNum/TP/TP2/metnum_tp2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lucas/Desktop/MetNum/TP/TP2/metnum_tp2 /home/lucas/Desktop/MetNum/TP/TP2/metnum_tp2 /home/lucas/Desktop/MetNum/TP/TP2/metnum_tp2/build /home/lucas/Desktop/MetNum/TP/TP2/metnum_tp2/build /home/lucas/Desktop/MetNum/TP/TP2/metnum_tp2/build/CMakeFiles/metnum.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/metnum.dir/depend

