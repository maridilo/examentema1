cmake_minimum_required(VERSION 3.26)
project(examentema1)

set(CMAKE_CXX_STANDARD 14)

add_executable(examentema1
     main.cpp
        estudiantes.cpp
        Memoria.cpp
        excepciones.cpp
        promedio.cpp
        ausencias.cpp
        filtro.cpp
        profesores.cpp)
