#include "Piece.h"

Piece::Piece(Color color, int x, int y) : color(color), x(x), y(y) {}

Color Piece::getColor() const {
    return color;
}

void Piece::setPosition(int newX, int newY) {
    x = newX;
    y = newY;
}

int Piece::getX() const {
    return x;
}

int Piece::getY() const {
    return y;
}