cmake_minimum_required(VERSION 3.20)
project(cpp_cherno)

set(CMAKE_CXX_STANDARD 26)

# Create the executable first
add_executable(glfw_test glfw_test.cpp
        47_dynamic_libraries.cpp
        48_template.cpp
        "49_template_(class).cpp"
        50_stack_vs_heap.cpp
        51_macros.cpp
)

# Use find_package to get the 'glfw' target, then link it
find_package(glfw3 REQUIRED)

# The 'PRIVATE' keyword ensures that the linker command
# is constructed correctly for this specific target
target_link_libraries(glfw_test PRIVATE glfw)