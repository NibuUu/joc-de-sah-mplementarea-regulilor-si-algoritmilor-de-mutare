#include "Queen.h"
#include <cmath>

Queen::Queen(Color color, int x, int y) : Piece(color, x, y) {}

bool Queen::isMoveValid(int newX, int newY) {
    return (newX == x || newY == y || std::abs(newX - x) == std::abs(newY - y));
}

char Queen::getSymbol() const {
    return color == WHITE ? 'Q' : 'q';
}