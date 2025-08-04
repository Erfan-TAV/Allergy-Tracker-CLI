cmake_minimum_required(VERSION 3.10)
project(AllergyTracker)

set(CMAKE_CXX_STANDARD 17)

# Include your headers
include_directories(include)

# Automatically find all .cpp files in src/ and its subdirectories
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Create the executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Link SQLite3
find_package(SQLite3 REQUIRED)
# target_link_libraries(${PROJECT_NAME} SQLite::SQLite3)
target_link_libraries(${PROJECT_NAME} sqlite3)