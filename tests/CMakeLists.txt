enable_testing()

include_directories(${PROJECT_SOURCE_DIR}/include)
# include_directories(${PROJECT_SOURCE_DIR}/src)

# GoogleTest setup
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
  DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Collect all test source files
file(GLOB_RECURSE TEST_FILES "*.cpp")

# Create test executable
add_executable(AllergyTrackerTests ${TEST_FILES})
target_link_libraries(AllergyTrackerTests AllergyCore sqlite3 gtest_main)

# Enable test discovery
include(GoogleTest)
gtest_discover_tests(AllergyTrackerTests)
