# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_SOURCE_DIR = /home/pi/YoutubeChannel/remove/ClickThePixel

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pi/YoutubeChannel/remove/ClickThePixel

# Include any dependencies generated for this target.
include CMakeFiles/target.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/target.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/target.dir/flags.make

CMakeFiles/target.dir/pixel.cpp.o: CMakeFiles/target.dir/flags.make
CMakeFiles/target.dir/pixel.cpp.o: pixel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/YoutubeChannel/remove/ClickThePixel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/target.dir/pixel.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/target.dir/pixel.cpp.o -c /home/pi/YoutubeChannel/remove/ClickThePixel/pixel.cpp

CMakeFiles/target.dir/pixel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/target.dir/pixel.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/YoutubeChannel/remove/ClickThePixel/pixel.cpp > CMakeFiles/target.dir/pixel.cpp.i

CMakeFiles/target.dir/pixel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/target.dir/pixel.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/YoutubeChannel/remove/ClickThePixel/pixel.cpp -o CMakeFiles/target.dir/pixel.cpp.s

CMakeFiles/target.dir/pixel.cpp.o.requires:

.PHONY : CMakeFiles/target.dir/pixel.cpp.o.requires

CMakeFiles/target.dir/pixel.cpp.o.provides: CMakeFiles/target.dir/pixel.cpp.o.requires
	$(MAKE) -f CMakeFiles/target.dir/build.make CMakeFiles/target.dir/pixel.cpp.o.provides.build
.PHONY : CMakeFiles/target.dir/pixel.cpp.o.provides

CMakeFiles/target.dir/pixel.cpp.o.provides.build: CMakeFiles/target.dir/pixel.cpp.o


# Object files for target target
target_OBJECTS = \
"CMakeFiles/target.dir/pixel.cpp.o"

# External object files for target target
target_EXTERNAL_OBJECTS =

target: CMakeFiles/target.dir/pixel.cpp.o
target: CMakeFiles/target.dir/build.make
target: /usr/local/lib/libopencv_stitching.so.3.3.0
target: /usr/local/lib/libopencv_superres.so.3.3.0
target: /usr/local/lib/libopencv_videostab.so.3.3.0
target: /usr/local/lib/libopencv_aruco.so.3.3.0
target: /usr/local/lib/libopencv_bgsegm.so.3.3.0
target: /usr/local/lib/libopencv_bioinspired.so.3.3.0
target: /usr/local/lib/libopencv_ccalib.so.3.3.0
target: /usr/local/lib/libopencv_dpm.so.3.3.0
target: /usr/local/lib/libopencv_face.so.3.3.0
target: /usr/local/lib/libopencv_freetype.so.3.3.0
target: /usr/local/lib/libopencv_fuzzy.so.3.3.0
target: /usr/local/lib/libopencv_img_hash.so.3.3.0
target: /usr/local/lib/libopencv_line_descriptor.so.3.3.0
target: /usr/local/lib/libopencv_optflow.so.3.3.0
target: /usr/local/lib/libopencv_reg.so.3.3.0
target: /usr/local/lib/libopencv_rgbd.so.3.3.0
target: /usr/local/lib/libopencv_saliency.so.3.3.0
target: /usr/local/lib/libopencv_stereo.so.3.3.0
target: /usr/local/lib/libopencv_structured_light.so.3.3.0
target: /usr/local/lib/libopencv_surface_matching.so.3.3.0
target: /usr/local/lib/libopencv_tracking.so.3.3.0
target: /usr/local/lib/libopencv_xfeatures2d.so.3.3.0
target: /usr/local/lib/libopencv_ximgproc.so.3.3.0
target: /usr/local/lib/libopencv_xobjdetect.so.3.3.0
target: /usr/local/lib/libopencv_xphoto.so.3.3.0
target: /usr/local/lib/libopencv_shape.so.3.3.0
target: /usr/local/lib/libopencv_photo.so.3.3.0
target: /usr/local/lib/libopencv_calib3d.so.3.3.0
target: /usr/local/lib/libopencv_phase_unwrapping.so.3.3.0
target: /usr/local/lib/libopencv_dnn.so.3.3.0
target: /usr/local/lib/libopencv_video.so.3.3.0
target: /usr/local/lib/libopencv_datasets.so.3.3.0
target: /usr/local/lib/libopencv_plot.so.3.3.0
target: /usr/local/lib/libopencv_text.so.3.3.0
target: /usr/local/lib/libopencv_features2d.so.3.3.0
target: /usr/local/lib/libopencv_flann.so.3.3.0
target: /usr/local/lib/libopencv_highgui.so.3.3.0
target: /usr/local/lib/libopencv_ml.so.3.3.0
target: /usr/local/lib/libopencv_videoio.so.3.3.0
target: /usr/local/lib/libopencv_imgcodecs.so.3.3.0
target: /usr/local/lib/libopencv_objdetect.so.3.3.0
target: /usr/local/lib/libopencv_imgproc.so.3.3.0
target: /usr/local/lib/libopencv_core.so.3.3.0
target: CMakeFiles/target.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pi/YoutubeChannel/remove/ClickThePixel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable target"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/target.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/target.dir/build: target

.PHONY : CMakeFiles/target.dir/build

CMakeFiles/target.dir/requires: CMakeFiles/target.dir/pixel.cpp.o.requires

.PHONY : CMakeFiles/target.dir/requires

CMakeFiles/target.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/target.dir/cmake_clean.cmake
.PHONY : CMakeFiles/target.dir/clean

CMakeFiles/target.dir/depend:
	cd /home/pi/YoutubeChannel/remove/ClickThePixel && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pi/YoutubeChannel/remove/ClickThePixel /home/pi/YoutubeChannel/remove/ClickThePixel /home/pi/YoutubeChannel/remove/ClickThePixel /home/pi/YoutubeChannel/remove/ClickThePixel /home/pi/YoutubeChannel/remove/ClickThePixel/CMakeFiles/target.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/target.dir/depend

