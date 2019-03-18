#include "Piece.h"

Piece::Piece(){

}
Piece::Piece(int id, bool white, bool taken, string name, int positionX, int positionY){
    this->_id = id;
    this->_white = white;
    this->_name = name;
    this->_position.first = positionX;
    this->_position.second = positionY;
    this->_taken = taken;
}
Piece::~Piece(){

}

int Piece::getId(){
    return this->_id;
}
void Piece::setId(int newValue){
    this->_id = newValue;
}

 int Piece::getPositionX(){
    return this->_position.first;
}

int Piece::getPositionY(){
    return this->_position.second;
}

void Piece::setPosition(pair <int, int> newPosition){
    this->_position = newPosition;
}

bool Piece::getWhite(){
    return this->_white;
}
void Piece::setWhite(bool newValue){
    this->_white = newValue;
}

bool Piece::getTaken(){
    return this->_taken;
}
void Piece::setTaken(bool newValue){
    this->_taken = newValue;
}

string Piece::getName(){
    return this->_name;
}
void Piece::setName(string newValue){
    this->_name = newValue;
}

void Piece::addPiece(){

}

void Piece::showPiece() {

}