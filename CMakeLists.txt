cmake_minimum_required(VERSION 3.10)
project(opencv_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(OpenCV REQUIRED)

message(STATUS "OpenCV_VERSION:${OpenCV_VERSION}")
message(STATUS "OpenCV_DIR:${OpenCV_DIR}")
message(STATUS "OpenCV_INSTALL_PATH:${OpenCV_INSTALL_PATH}")
message(STATUS "OpenCV_INCLUDE_DIRS:${OpenCV_INCLUDE_DIRS}")
message(STATUS "OpenCV_LIB_DIR:${OpenCV_INSTALL_PATH}/lib")
message(STATUS "OpenCV_LIBS:${OpenCV_LIBS}")

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(opencv_cpp 2-3.cpp)

link_directories(${OpenCV_LIB_DIR})
target_link_libraries(opencv_cpp ${OpenCV_LIBS})
