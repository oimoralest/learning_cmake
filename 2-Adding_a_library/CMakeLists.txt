cmake_minimum_required(VERSION 3.10)

# set project name and version
project(Tutorial VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# <--- NEW IN STEP 2 --->
# Make the MathFunctions library optional
option(USE_MYMATH "Use tutorial provided math implementation" ON)

# Setting up header file
configure_file(TutorialConfig.h.in TutorialConfig.h)

if(USE_MYMATH)
    # Add the MathFunctions library
    add_subdirectory(MathFunctions)
    # EXTRA_LIBS is used to collect up any optional libraries to later be linked into the executable
    list(APPEND EXTRA_LIBS MathFunctions)
    # EXTRA_INCLUDES is used similarly for optional header files
    list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/MathFunctions")
endif()


# Add the executable
add_executable(Tutorial tutorial.cxx)

target_link_libraries(Tutorial PUBLIC ${EXTRA_LIBS})

# Add the binary tree to the search path for include files so that we will find TutorialConfig.h
target_include_directories(
    Tutorial PUBLIC
    "${PROJECT_BINARY_DIR}"
    ${EXTRA_INCLUDES}
)