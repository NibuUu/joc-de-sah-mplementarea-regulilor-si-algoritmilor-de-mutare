#ifndef PIECE_H
#define PIECE_H

enum Color { WHITE, BLACK };

class Piece {
protected:
    Color color;
    int x, y; // Pozitia piesei pe tabla

public:
    Piece(Color color, int x, int y);
    virtual ~Piece() {}

    Color getColor() const;
    virtual bool isMoveValid(int newX, int newY) = 0;
    virtual char getSymbol() const = 0;

    void setPosition(int newX, int newY);
    int getX() const;
    int getY() const;
};

#endif // PIECE_H