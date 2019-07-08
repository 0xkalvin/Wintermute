#include "piece.h"
#ifndef KING_H
#define KING_H


class King : public Piece{
    public:
        King(bool white);
        ~King();
        bool move(Board *b, int xOrigin, int yOrigin, int xDestination, int yDestination);

};

#endif