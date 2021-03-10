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

#=================== INCLUSION OF Project Files ================#
add_executable(${CMAKE_PROJECT_NAME}
  main.cpp
  dialog.cpp
  dialog.ui
)


# link required libs
target_link_libraries(${PROJECT_NAME} Qt5::Widgets ${OpenCV_LIBS})