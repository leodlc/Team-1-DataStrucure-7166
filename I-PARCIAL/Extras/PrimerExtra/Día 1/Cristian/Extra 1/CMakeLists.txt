cmake_minimum_required(VERSION 3.0.0)
project(Extra1 VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(Extra1 main.cpp Numeros.h Numeros.cpp Operaciones.h Operaciones.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
