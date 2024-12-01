cmake_minimum_required(VERSION 3.10)  # Or the version you need

# Set the project name and version
project(Chapter10 VERSION 1.0)

# Set the C++ standard to C++17 (or later)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the include directory
include_directories(${PROJECT_SOURCE_DIR}/include)

# Alternatively, using target_include_directories (more modern and preferred)
add_executable(Program10-1 src/Program10-1.cpp)
add_executable(Program10-2 src/Program10-2.cpp)

# Add the include directory for a specific target
#target_include_directories(Chapter03 PRIVATE ${PROJECT_SOURCE_DIR}/include)
