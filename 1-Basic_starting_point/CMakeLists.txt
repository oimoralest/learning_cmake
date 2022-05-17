cmake_minimum_required(VERSION 3.10)

# set the project name
# project(Tutorial)

# set project name and version
project(Tutorial VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Setting up header file
configure_file(TutorialConfig.h.in TutorialConfig.h)

# add the executable
add_executable(Tutorial tutorial.cxx)

# Adding current directory to the list of paths to search for include files
target_include_directories(Tutorial PUBLIC "${PROJECT_BINARY_DIR}")
