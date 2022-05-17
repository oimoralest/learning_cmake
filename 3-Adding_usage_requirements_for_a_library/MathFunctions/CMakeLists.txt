# Add libraries from MathFunctions
add_library(MathFunctions mysqrt.cxx)

# <-- NEW IN STEP 3 -->
target_include_directories(
    MathFunctions
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
)