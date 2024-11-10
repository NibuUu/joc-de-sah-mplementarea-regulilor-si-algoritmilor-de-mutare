#include "King.h"
#include <cmath>

King::King(Color color, int x, int y) : Piece(color, x, y) {}

bool King::isMoveValid(int newX, int newY) {
    return std::abs(newX - x) <= 1 && std::abs(newY - y) <= 1;
}

char King::getSymbol() const {
    return color == WHITE ? 'K' : 'k';
}