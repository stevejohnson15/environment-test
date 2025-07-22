# C++ Hello World with CMake

A simple C++ hello world application built with CMake.

## Building the Project

### Prerequisites
- CMake (version 3.10 or higher)
- A C++ compiler (GCC, Clang, or MSVC)

### Build Steps

1. Create a build directory:
   ```bash
   mkdir build
   cd build
   ```

2. Generate build files:
   ```bash
   cmake ..
   ```

3. Build the project:
   ```bash
   cmake --build .
   ```

## Running the Application

After building, you can run the hello world application:

```bash
./hello_world
```

## Project Structure

```
.
├── CMakeLists.txt    # CMake configuration
├── README.md         # This file
└── src/
    └── main.cpp      # Main C++ source file
```

## Clean Build

To clean and rebuild:

```bash
rm -rf build
mkdir build
cd build
cmake ..
cmake --build .
``` 