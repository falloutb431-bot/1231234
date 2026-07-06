cmake_minimum_required(VERSION 3.20)
project(geometry_project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Динамическая библиотека
add_library(geometry_lib SHARED
    geometry_lib/Shape.cpp
    geometry_lib/Triangle.cpp
    geometry_lib/RightTriangle.cpp
    geometry_lib/IsoscelesTriangle.cpp
    geometry_lib/EquilateralTriangle.cpp
    geometry_lib/Quadrilateral.cpp
    geometry_lib/Rectangle.cpp
    geometry_lib/Square.cpp
    geometry_lib/Parallelogram.cpp
    geometry_lib/Rhombus.cpp
)

target_include_directories(geometry_lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/geometry_lib
)

# Экспорт символов только при сборке самой DLL
target_compile_definitions(geometry_lib PRIVATE GEOMETRY_LIB_EXPORTS)

# Консольное приложение
add_executable(geometry_app
    app/main.cpp
)

target_link_libraries(geometry_app PRIVATE geometry_lib)