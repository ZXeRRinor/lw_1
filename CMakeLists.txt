# cmake_minimum_required(VERSION <specify CMake version here>)
#project(untitled)
#
#set(CMAKE_CXX_STANDARD 11)
#
#add_executable(untitled main.cpp)

cmake_minimum_required(VERSION 3.16.4)
project(PoundsToKilogramsConverter)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 20)

find_package(Qt5Core)
find_package(Qt5Widgets)

# Определяем цель сборки
add_executable(PoundsToKilogramsConverter main.cpp ${QT_TEST_UI_HEADERS} PoundsToKilogramsConverter.h PoundsToKilogramsConverter.cpp)    # Исполняемые файлы
target_link_libraries(PoundsToKilogramsConverter ${Qt5Core_LIBRARIES} ${Qt5Widgets_LIBRARIES})         # Линковка библиотек