cmake_minimum_required(VERSION 3.10)
project(AllergyTracker)

set(CMAKE_CXX_STANDARD 17)

# Find dependencies
find_package(SQLite3 REQUIRED)

# Add subdirectories
add_subdirectory(src)
add_subdirectory(tests)