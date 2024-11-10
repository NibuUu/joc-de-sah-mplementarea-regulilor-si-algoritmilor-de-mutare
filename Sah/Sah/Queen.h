#ifndef QUEEN_H
#define QUEEN_H

#include "Piece.h"

class Queen : public Piece {
public:
    Queen(Color color, int x, int y);
    bool isMoveValid(int newX, int newY) override;
    char getSymbol() const override;
};

#endif // QUEEN_H