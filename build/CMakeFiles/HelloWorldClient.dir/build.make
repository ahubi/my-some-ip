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
CMAKE_SOURCE_DIR = /home/artur/my-some-ip

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/artur/my-some-ip/build

# Include any dependencies generated for this target.
include CMakeFiles/HelloWorldClient.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HelloWorldClient.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HelloWorldClient.dir/flags.make

CMakeFiles/HelloWorldClient.dir/src/HelloWorldClient.cpp.o: CMakeFiles/HelloWorldClient.dir/flags.make
CMakeFiles/HelloWorldClient.dir/src/HelloWorldClient.cpp.o: ../src/HelloWorldClient.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/artur/my-some-ip/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HelloWorldClient.dir/src/HelloWorldClient.cpp.o"
	/usr/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HelloWorldClient.dir/src/HelloWorldClient.cpp.o -c /home/artur/my-some-ip/src/HelloWorldClient.cpp

CMakeFiles/HelloWorldClient.dir/src/HelloWorldClient.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HelloWorldClient.dir/src/HelloWorldClient.cpp.i"
	/usr/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/artur/my-some-ip/src/HelloWorldClient.cpp > CMakeFiles/HelloWorldClient.dir/src/HelloWorldClient.cpp.i

CMakeFiles/HelloWorldClient.dir/src/HelloWorldClient.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HelloWorldClient.dir/src/HelloWorldClient.cpp.s"
	/usr/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/artur/my-some-ip/src/HelloWorldClient.cpp -o CMakeFiles/HelloWorldClient.dir/src/HelloWorldClient.cpp.s

CMakeFiles/HelloWorldClient.dir/src-gen/v1/commonapi/HelloWorldSomeIPProxy.cpp.o: CMakeFiles/HelloWorldClient.dir/flags.make
CMakeFiles/HelloWorldClient.dir/src-gen/v1/commonapi/HelloWorldSomeIPProxy.cpp.o: ../src-gen/v1/commonapi/HelloWorldSomeIPProxy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/artur/my-some-ip/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/HelloWorldClient.dir/src-gen/v1/commonapi/HelloWorldSomeIPProxy.cpp.o"
	/usr/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HelloWorldClient.dir/src-gen/v1/commonapi/HelloWorldSomeIPProxy.cpp.o -c /home/artur/my-some-ip/src-gen/v1/commonapi/HelloWorldSomeIPProxy.cpp

CMakeFiles/HelloWorldClient.dir/src-gen/v1/commonapi/HelloWorldSomeIPProxy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HelloWorldClient.dir/src-gen/v1/commonapi/HelloWorldSomeIPProxy.cpp.i"
	/usr/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/artur/my-some-ip/src-gen/v1/commonapi/HelloWorldSomeIPProxy.cpp > CMakeFiles/HelloWorldClient.dir/src-gen/v1/commonapi/HelloWorldSomeIPProxy.cpp.i

CMakeFiles/HelloWorldClient.dir/src-gen/v1/commonapi/HelloWorldSomeIPProxy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HelloWorldClient.dir/src-gen/v1/commonapi/HelloWorldSomeIPProxy.cpp.s"
	/usr/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/artur/my-some-ip/src-gen/v1/commonapi/HelloWorldSomeIPProxy.cpp -o CMakeFiles/HelloWorldClient.dir/src-gen/v1/commonapi/HelloWorldSomeIPProxy.cpp.s

CMakeFiles/HelloWorldClient.dir/src-gen/v1/commonapi/HelloWorldSomeIPDeployment.cpp.o: CMakeFiles/HelloWorldClient.dir/flags.make
CMakeFiles/HelloWorldClient.dir/src-gen/v1/commonapi/HelloWorldSomeIPDeployment.cpp.o: ../src-gen/v1/commonapi/HelloWorldSomeIPDeployment.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/artur/my-some-ip/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/HelloWorldClient.dir/src-gen/v1/commonapi/HelloWorldSomeIPDeployment.cpp.o"
	/usr/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HelloWorldClient.dir/src-gen/v1/commonapi/HelloWorldSomeIPDeployment.cpp.o -c /home/artur/my-some-ip/src-gen/v1/commonapi/HelloWorldSomeIPDeployment.cpp

CMakeFiles/HelloWorldClient.dir/src-gen/v1/commonapi/HelloWorldSomeIPDeployment.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HelloWorldClient.dir/src-gen/v1/commonapi/HelloWorldSomeIPDeployment.cpp.i"
	/usr/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/artur/my-some-ip/src-gen/v1/commonapi/HelloWorldSomeIPDeployment.cpp > CMakeFiles/HelloWorldClient.dir/src-gen/v1/commonapi/HelloWorldSomeIPDeployment.cpp.i

CMakeFiles/HelloWorldClient.dir/src-gen/v1/commonapi/HelloWorldSomeIPDeployment.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HelloWorldClient.dir/src-gen/v1/commonapi/HelloWorldSomeIPDeployment.cpp.s"
	/usr/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/artur/my-some-ip/src-gen/v1/commonapi/HelloWorldSomeIPDeployment.cpp -o CMakeFiles/HelloWorldClient.dir/src-gen/v1/commonapi/HelloWorldSomeIPDeployment.cpp.s

# Object files for target HelloWorldClient
HelloWorldClient_OBJECTS = \
"CMakeFiles/HelloWorldClient.dir/src/HelloWorldClient.cpp.o" \
"CMakeFiles/HelloWorldClient.dir/src-gen/v1/commonapi/HelloWorldSomeIPProxy.cpp.o" \
"CMakeFiles/HelloWorldClient.dir/src-gen/v1/commonapi/HelloWorldSomeIPDeployment.cpp.o"

# External object files for target HelloWorldClient
HelloWorldClient_EXTERNAL_OBJECTS =

HelloWorldClient: CMakeFiles/HelloWorldClient.dir/src/HelloWorldClient.cpp.o
HelloWorldClient: CMakeFiles/HelloWorldClient.dir/src-gen/v1/commonapi/HelloWorldSomeIPProxy.cpp.o
HelloWorldClient: CMakeFiles/HelloWorldClient.dir/src-gen/v1/commonapi/HelloWorldSomeIPDeployment.cpp.o
HelloWorldClient: CMakeFiles/HelloWorldClient.dir/build.make
HelloWorldClient: CMakeFiles/HelloWorldClient.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/artur/my-some-ip/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable HelloWorldClient"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HelloWorldClient.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HelloWorldClient.dir/build: HelloWorldClient

.PHONY : CMakeFiles/HelloWorldClient.dir/build

CMakeFiles/HelloWorldClient.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/HelloWorldClient.dir/cmake_clean.cmake
.PHONY : CMakeFiles/HelloWorldClient.dir/clean

CMakeFiles/HelloWorldClient.dir/depend:
	cd /home/artur/my-some-ip/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/artur/my-some-ip /home/artur/my-some-ip /home/artur/my-some-ip/build /home/artur/my-some-ip/build /home/artur/my-some-ip/build/CMakeFiles/HelloWorldClient.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HelloWorldClient.dir/depend

