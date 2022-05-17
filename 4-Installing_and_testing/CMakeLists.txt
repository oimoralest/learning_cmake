cmake_minimum_required(VERSION 3.10)

# set project name and version
project(Tutorial VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Make the MathFunctions library optional
option(USE_MYMATH "Use tutorial provided math implementation" ON)

# Setting up header file
configure_file(TutorialConfig.h.in TutorialConfig.h)

if(USE_MYMATH)
    # Add the MathFunctions library
    add_subdirectory(MathFunctions)
    # EXTRA_LIBS is used to collect up any optional libraries to later be linked into the executable
    list(APPEND EXTRA_LIBS MathFunctions)
endif()

# Add the executable
add_executable(Tutorial tutorial.cxx)

target_link_libraries(Tutorial PUBLIC ${EXTRA_LIBS})

# Add the binary tree to the search path for include files so that we will find TutorialConfig.h
target_include_directories(
    Tutorial PUBLIC
    "${PROJECT_BINARY_DIR}"
)

# <-- NEW IN STEP 4 -->
install(TARGETS Tutorial DESTINATION bin)
install(FILES "${PROJECT_BINARY_DIR}/TutorialConfig.h" DESTINATION include)

enable_testing()

# does the application run
add_test(NAME Runs COMMAND Tutorial 25)

# does the usage message work?
add_test(NAME Usage COMMAND Tutorial)
set_tests_properties(Usage
  PROPERTIES PASS_REGULAR_EXPRESSION "Usage:.*number"
  )

# define a function to simplify adding tests
function(do_test target arg result)
  add_test(NAME Comp${arg} COMMAND ${target} ${arg})
  set_tests_properties(Comp${arg}
    PROPERTIES PASS_REGULAR_EXPRESSION ${result}
    )
endfunction()

# do a bunch of result based tests
do_test(Tutorial 4 "4 is 2")
do_test(Tutorial 9 "9 is 3")
do_test(Tutorial 5 "5 is 2.236")
do_test(Tutorial 7 "7 is 2.645")
do_test(Tutorial 25 "25 is 5")
do_test(Tutorial -25 "-25 is (-nan|nan|0)")
do_test(Tutorial 0.0001 "0.0001 is 0.01")
