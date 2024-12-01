cmake_minimum_required(VERSION 3.10)  # Or the version you need

# Set the project name and version
project(Chapter02 VERSION 1.0)

# Set the C++ standard to C++17 (or later)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the include directory
include_directories(${PROJECT_SOURCE_DIR}/include)

# Alternatively, using target_include_directories (more modern and preferred)
add_executable(Program2p1 src/Program2p1.cpp)
add_executable(Program2p2 src/Program2p2.cpp)
add_executable(Program2p6 src/Program2p6.cpp)
add_executable(RadarCaseStudy src/RadarCaseStudy.cpp)

# Add the include directory for a specific target
#target_include_directories(Chapter02 PRIVATE ${PROJECT_SOURCE_DIR}/include)
