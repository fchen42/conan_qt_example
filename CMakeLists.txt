cmake_minimum_required(VERSION 3.12.0)
project(conan_qt_example)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(${CMAKE_BINARY_DIR}/conan_paths.cmake)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 REQUIRED)

include_directories(
  ${Qt6_INCLUDE_DIR}
)

add_executable(conan_qt_example
    ./widget.h
    ./widget.cpp
    ./main.cpp
)
target_link_libraries(conan_qt_example Qt6::Widgets)
