cmake_minimum_required(VERSION 3.23)
project(CMAKE)

set(CMAKE_CXX_STANDARD 14)

include_directories(test_lib)

# UNIX, WIN32, WINRT, CYGWIN, APPLE are environment variables as flags set by default system
if (UNIX)
  message("This is a ${CMAKE_SYSTEM_NAME} system")
elseif (WIN32)
  message("This is a Windows System")
endif ()

# Define Macros: prefix of D
if (${CMAKE_SYSTEM_NAME} MATCHES Linux)
  add_definitions(-DCMAKESYSTEM="LINUX")
endif ()

# Either set the files to be build in the following or build seperate library
#[[set(SOURCES test_lib/operations.cpp
            test_lib/operations.hpp
            main.cpp)

add_executable(NAME ${SOURCES})]]

# 2 Ways to include libraries
add_library(math SHARED test_lib/operations.cpp)
add_subdirectory(test_lib_submodule)

add_executable(cmake main.cpp)
target_link_libraries(cmake math)
target_link_libraries(cmake math_submodule)

# look for a library. If a library is found: the following varialbes are included automatically:
#<NAME>_FOUND, xxx
find_package(Boost)
message("the library Boost is: ${Boost_FOUND}")

