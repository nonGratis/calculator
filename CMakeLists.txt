cmake_minimum_required(VERSION 3.10)
project(Calculator)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(calculator STATIC 
    calculator.cpp
)

add_executable(calculator_app 
    main.cpp
)

#  Зв'язую бібліотеку calculator з виконувальним файлом calculator_app
target_link_libraries(calculator_app calculator)
