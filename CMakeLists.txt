cmake_minimum_required(VERSION 3.2)
project(conan_qt_example)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(${CMAKE_BINARY_DIR}/conan_paths.cmake)

find_package(Qt6 REQUIRED)

include_directories(
  ${Qt6_INCLUDE_DIR}
)

add_executable(conan_qt_example ./main.cpp)
target_link_libraries(conan_qt_example Qt6::Widgets)
