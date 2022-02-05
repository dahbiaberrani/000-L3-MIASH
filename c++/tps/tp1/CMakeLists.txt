cmake_minimum_required(VERSION 3.21)
project(tp1)

set(CMAKE_CXX_STANDARD 14)

include_directories(exercice_2)
include_directories(exercice_3)

add_executable(tp1
        exercice_2/person.hpp
        exercice_2/person.cpp
        exercice_3/main.cpp
        exercice_3/noeud.cpp
        exercice_3/noeud.hpp
        )
