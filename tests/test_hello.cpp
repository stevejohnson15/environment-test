#include <catch2/catch_test_macros.hpp>
#include <sstream>
#include <iostream>

// Declaration of the function to test
void print_hello_world();

TEST_CASE("print_hello_world outputs the correct string") {
    std::stringstream buffer;
    std::streambuf* old = std::cout.rdbuf(buffer.rdbuf());

    print_hello_world();

    std::cout.rdbuf(old); // Restore original buffer
    REQUIRE(buffer.str() == "Hello, World!\n");
} 