cmake_minimum_required(VERSION 3.26)
project(Trajet)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Trajet
        Trajet.cpp
        Trajet.h
        main.cpp
        TrajetS.cpp
        TrajetS.h
        Node.cpp
        Node.h
        ListeChainee.cpp
        ListeChainee.h
)

add_executable(main main.cpp)