#ifndef KING_H
#define KING_H

#include "Piece.h"

class King : public Piece {
public:
    King(Color color, int x, int y);
    bool isMoveValid(int newX, int newY) override;
    char getSymbol() const override;
};

#endif // KING_H