cmake_minimum_required(VERSION 3.10)
project(Proyecto_mamalon VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Busca SFML mediante la variable que se le pasará por la terminal
find_package(SFML 3.1 COMPONENTS Graphics Window System REQUIRED)

add_executable(Proyecto_mamalon 
    src/main.cpp
    src/Game.cpp
    src/Player.cpp
)

target_link_libraries(Proyecto_mamalon PRIVATE SFML::Graphics SFML::Window SFML::System)