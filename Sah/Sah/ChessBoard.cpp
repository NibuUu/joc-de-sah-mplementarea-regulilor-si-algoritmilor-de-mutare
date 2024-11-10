#include "ChessBoard.h"
#include <iostream>

ChessBoard::ChessBoard() : board(8, std::vector<std::shared_ptr<Piece>>(8, nullptr)) {
    board[0][4] = std::make_shared<King>(BLACK, 0, 4);
    board[7][4] = std::make_shared<King>(WHITE, 7, 4);
    board[0][3] = std::make_shared<Queen>(BLACK, 0, 3);
    board[7][3] = std::make_shared<Queen>(WHITE, 7, 3);
}

bool ChessBoard::movePiece(int startX, int startY, int endX, int endY) {
    auto piece = board[startX][startY];
    if (piece && piece->isMoveValid(endX, endY)) {
        board[endX][endY] = piece;
        board[startX][startY] = nullptr;
        piece->setPosition(endX, endY);
        return true;
    }
    return false;
}

void ChessBoard::printBoard() const {
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if (board[i][j]) {
                std::cout << board[i][j]->getSymbol() << " ";
            }
            else {
                std::cout << ". ";
            }
        }
        std::cout << std::endl;
    }
}