cmake_minimum_required(VERSION 3.0.0)
project(Extra2 VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(Extra2 main.cpp Numero.h Numero.cpp Operacion.h Operacion.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
