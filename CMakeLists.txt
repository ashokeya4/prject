cmake_minimum_required(VERSION 3.16)

project(unified_ipsec_agent
    VERSION 0.1.0
    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable tests (we will use later)
enable_testing()

add_subdirectory(src)
add_subdirectory(tests)
