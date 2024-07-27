cmake_minimum_required(VERSION 3.10)
project(Juego)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

set(SOURCES
    src/main.cpp
    src/Juego.cpp
    src/Jugador.cpp
    src/FiguraInicio.cpp
    src/FiguraMeta.cpp
    src/FiguraFactory.cpp
    src/Plataforma.cpp
    src/Trampa.cpp
    src/Dinamita.cpp
    src/EstadoEdicionMapa.cpp
    src/EstadoJuegoNormal.cpp
)
add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} sfml-graphics sfml-window sfml-system)
