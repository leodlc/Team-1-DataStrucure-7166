cmake_minimum_required(VERSION 3.0.0)
project(SumaDeFracciones VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(SumaDeFracciones main.cpp Fraccion.h Fraccion.cpp Operacion.h Operacion.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
