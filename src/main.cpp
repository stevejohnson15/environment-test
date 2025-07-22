#include <iostream>
#include <format>

void print_hello_world() {
    std::cout << "Entering function " << __func__ << std::endl;
    std::cout << "Hello, World!" << std::endl;
}

int main() {
    print_hello_world();
    return 0;
} 