# Add libraries from MathFunctions
add_library(MathFunctions mysqrt.cxx)

# Include library in the includes path
target_include_directories(
    MathFunctions
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
)

# <-- NEW IN STEP 4 -->
install(TARGETS MathFunctions DESTINATION lib)
install(FILES MathFunctions.h DESTINATION include)
