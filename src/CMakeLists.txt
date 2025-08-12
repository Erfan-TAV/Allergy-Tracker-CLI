# Include headers
include_directories(${PROJECT_SOURCE_DIR}/include)

# Gather all .cpp files except main.cpp
file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS "*.cpp")
list(REMOVE_ITEM SRC_FILES "${CMAKE_CURRENT_SOURCE_DIR}/main.cpp")

# Create core static library
add_library(AllergyCore ${SRC_FILES})

# Create main application executable
add_executable(AllergyTracker main.cpp)
target_link_libraries(AllergyTracker AllergyCore sqlite3)
