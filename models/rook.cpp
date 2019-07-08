#include "rook.h"


Rook::Rook(bool white) : Piece(rookSymbol, rookValue, white){}

Rook::~Rook(){}

void Rook::move(Board *b, int xOrigin, int yOrigin, int xDestination, int yDestination){
    if(xOrigin != xDestination && yOrigin != yDestination){
        throw "Rook cannot move to that square";
    } 
    
    b->matrix[xOrigin][yOrigin] = emptyValue;
    b->matrix[xDestination][yDestination] = this->isWhite() ? this->getValue() : -1*this->getValue();
    
}