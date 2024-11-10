#include "ChessBoard.h"
#include <iostream>

int main() {
    ChessBoard chessBoard;
    chessBoard.printBoard();

    int startX, startY, endX, endY;
    while (true) {
        std::cout << "Introduceti mutarea (ex: startX startY endX endY): ";
        std::cin >> startX >> startY >> endX >> endY;

        if (chessBoard.movePiece(startX, startY, endX, endY)) {
            std::cout << "Mutare reusita!" << std::endl;
        }
        else {
            std::cout << "Mutare invalida!" << std::endl;
        }

        chessBoard.printBoard();
    }

    return 0;
}