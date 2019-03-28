#pragma once

#include <iostream>
#include <c++/4.8.3/vector>
#include <vector>

using namespace std;

class Piece {
private:
    int _id;
    pair <int, int> _position;
    bool _white;
    bool _taken;
    string _name;

public:
	vector<Piece*>*lesPieces;
	
    Piece();
    Piece(int id, bool white, bool taken, string name, int positionX, int positionY);
    ~Piece();
	void initPiece();


    int getId();
    void setId(int newValue);

    virtual int getPositionX();
    virtual int getPositionY();
    virtual void setPosition(pair <int, int> newPosition);

    bool getWhite();
    void setWhite(bool newValue);

    bool getTaken();
    void setTaken(bool newValue);

    string getName();
    void setName(string newValue);

    void addPiece();

    void showPiece();
};