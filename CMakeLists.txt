cmake_minimum_required(VERSION 3.10)

# Set the project name
project(HelloWorld)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add the executable
add_executable(hello_world src/main.cpp) 

# Enable testing
include(CTest)
enable_testing()

# Add Catch2 for testing
include(FetchContent)
FetchContent_Declare(
  catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG v3.5.2 # You can update this to the latest stable version
)
FetchContent_MakeAvailable(catch2)

# Add test executable
add_executable(test_hello tests/test_hello.cpp src/main.cpp)
target_link_libraries(test_hello PRIVATE Catch2::Catch2WithMain)

# Register the test
add_test(NAME test_hello COMMAND test_hello) 