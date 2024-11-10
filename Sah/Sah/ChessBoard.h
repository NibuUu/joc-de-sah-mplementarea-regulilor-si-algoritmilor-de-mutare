#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include "Piece.h"
#include "King.h"
#include "Queen.h"
#include <vector>
#include <memory>

class ChessBoard {
private:
    std::vector<std::vector<std::shared_ptr<Piece>>> board;

public:
    ChessBoard();
    bool movePiece(int startX, int startY, int endX, int endY);
    void printBoard() const;
};

#endif // CHESSBOARD_H