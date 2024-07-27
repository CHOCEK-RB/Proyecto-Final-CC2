#include "../include_clases/Juego.hpp"

int main() {
    Juego& juego = Juego::getInstance();
    juego.run();
    return 0;
}