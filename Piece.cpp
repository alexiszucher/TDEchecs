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

void Piece::initPiece()
{
	Piece *RoiN;
	RoiN = new Piece(1, false, false, "Ro.", 0, 3);
	Piece *ReineN;
	ReineN = new Piece(2, false, false, "R. ", 0, 4);
	Piece *FouN1;
	FouN1 = new Piece(3, false, false, "F. ", 0, 2);
	Piece *ChevalN1;
	ChevalN1 = new Piece(4, false, false, "C. ", 0, 1);
	Piece *TourN1;
	TourN1 = new Piece(5, false, false, "T. ", 0, 0);
	Piece *FouN2;
	FouN2 = new Piece(6, false, false, "F. ", 0, 5);
	Piece *ChevalN2;
	ChevalN2 = new Piece(7, false, false, "C. ", 0, 6);
	Piece *TourN2;
	TourN2 = new Piece(8, false, false, "Ro.", 0, 7);
	Piece *PionN1;
	PionN1 = new Piece(9, false, false, "P. ", 1, 0);
	Piece *PionN2;
	PionN2 = new Piece(10, false, false, "P. ", 1, 1);
	Piece *PionN3;
	PionN3 = new Piece(11, false, false, "P. ", 1, 2);
	Piece *PionN4;
	PionN4 = new Piece(12, false, false, "P. ", 1, 3);
	Piece *PionN5;
	PionN5 = new Piece(13, false, false, "P. ", 1, 4);
	Piece *PionN6;
	PionN6 = new Piece(14, false, false, "P. ", 1, 5);
	Piece *PionN7;
	PionN7 = new Piece(15, false, false, "P. ", 1, 6);
	Piece *PionN8;
	PionN8 = new Piece(16, false, false, "P. ", 1, 7);

	///////////////////////////////////////////////////////////////////////////

	Piece *RoiB;
	RoiB = new Piece(17, false, false, "Ro*", 7, 3);
	Piece *ReineB;
	ReineB = new Piece(18, false, false, "R* ", 7, 4);
	Piece *FouB1;
	FouB1 = new Piece(19, false, false, "F* ", 7, 2);
	Piece *ChevalB1;
	ChevalierB1 = new Piece(20, false, false, "C* ", 7, 1);
	Piece *TourB1;
	TourB1 = new Piece(21, false, false, "T* ", 7, 0);
	Piece *FouB2;
	FouB2 = new Piece(22, false, false, "F* ", 7, 5);
	Piece *ChevalB2;
	ChevalB2 = new Piece(23, false, false, "C* ", 7, 6);
	Piece *TourB2;
	TourB2 = new Piece(24, false, false, "T* ", 7, 7);
	Piece *PionB1;
	PionB1 = new Piece(25, false, false, "P* ", 6, 0);
	Piece *PionB2;
	PionB2 = new Piece(26, false, false, "P* ", 6, 1);
	Piece *PionB3;
	PionB3 = new Piece(27, false, false, "P* ", 6, 2);
	Piece *PionB4;
	PionB4 = new Piece(28, false, false, "P* ", 6, 3);
	Piece *PionB5;
	PionB5 = new Piece(29, false, false, "P* ", 6, 4);
	Piece *PionB6;
	PionB6 = new Piece(30, false, false, "P* ", 6, 5);
	Piece *PionB7;
	PionB7 = new Piece(31, false, false, "P* ", 6, 6);
	Piece *PionB8;
	PionB8 = new Piece(32, false, false, "P* ", 6, 7);

	///////////////////////////////////////////////////////////////////////////////////////

	this->lesPieces->push_back(RoiN);
	this->lesPieces->push_back(ReineN);
	this->lesPieces->push_back(FouN1);
	this->lesPieces->push_back(FouN2);
	this->lesPieces->push_back(TourN1);
	this->lesPieces->push_back(TourN2);
	this->lesPieces->push_back(ChevalN1);
	this->lesPieces->push_back(ChevalN2);
	this->lesPieces->push_back(PionN1);
	this->lesPieces->push_back(PionN2);
	this->lesPieces->push_back(PionN3);
	this->lesPieces->push_back(PionN4);
	this->lesPieces->push_back(PionN5);
	this->lesPieces->push_back(PionN6);
	this->lesPieces->push_back(PionN7);
	this->lesPieces->push_back(PionN8);

	/////////////////////////////////////////////////////////////////////////////////

	this->lesPieces->push_back(RoiB);
	this->lesPieces->push_back(ReineB);
	this->lesPieces->push_back(FouB1);
	this->lesPieces->push_back(FouB2);
	this->lesPieces->push_back(ChevalB1);
	this->lesPieces->push_back(ChevalB2);
	this->lesPieces->push_back(TourB1);
	this->lesPieces->push_back(TourB2);
	this->lesPieces->push_back(PionB1);
	this->lesPieces->push_back(PionB2);
	this->lesPieces->push_back(PionB3);
	this->lesPieces->push_back(PionB4);
	this->lesPieces->push_back(PionB5);
	this->lesPieces->push_back(PionB6);
	this->lesPieces->push_back(PionB7);
	this->lesPieces->push_back(PionB8);
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