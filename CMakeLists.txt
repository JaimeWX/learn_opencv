cmake_minimum_required(VERSION 3.10)
project(opencv_1)

set(OpenCV_DIR "/usr/local/share/opencv4")

find_package(OpenCV 4.5.5 REQUIRED)

INCLUDE_DIRECTORIES(
  ${OpenCV_INCLUDE_DIRS}
)

add_executable(o1 src/o1.cpp)

target_link_libraries(o1 ${OpenCV_LIBS})

