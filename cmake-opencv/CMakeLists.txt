cmake_minimum_required(VERSION 3.14)

project(demo.exe VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


#======================= INCLUSION OF Qt =======================#
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

set(OpenCV_DIR "/usr/local/Cellar/opencv/4.4.0_1/lib/cmake/opencv4")
find_package(OpenCV REQUIRED)

#====================== Print some message showing some of them
# message(STATUS "OpenCV library status:")
# message(STATUS " config: ${OpenCV_DIR}")
# message(STATUS " version: ${OpenCV_VERSION}")
# message(STATUS " libraries: ${OpenCV_LIBS}")
# message(STATUS " include path: ${OpenCV_INCLUDE_DIRS}")


#=================== INCLUSION OF Project Files ================#
set(SOURCE_DIR "${CMAKE_SOURCE_DIR}/src")

file(GLOB_RECURSE SOURCES
    "${SOURCE_DIR}/*.ui"
    "${SOURCE_DIR}/*.qrc"
    "${SOURCE_DIR}/*.h"
    "${SOURCE_DIR}/*.cpp"
)
add_executable(${CMAKE_PROJECT_NAME} ${SOURCES})

# link required libs
target_link_libraries(${PROJECT_NAME} Qt5::Widgets ${OpenCV_LIBS})