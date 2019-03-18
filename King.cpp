#include "King.h"

void King::move(int caseX) {

    int positionX = this->getPositionX();
    int positionY = this->getPositionY();

    pair <int, int> newPosition;

    switch (caseX) {

        case 1 :
            newPosition.first = positionX - 1;
            newPosition.second = positionY + 1;

        case 2 :
            newPosition.first = positionX;
            newPosition.second = positionY + 1;

        case 3 :
            newPosition.first = positionX + 1;
            newPosition.second = positionY + 1;

        case 4 :
            newPosition.first = positionX + 1;
            newPosition.second = positionY;

        case 5 :
            newPosition.first = positionX + 1;
            newPosition.second = positionY - 1;

        case 6 :
            newPosition.first = positionX;
            newPosition.second = positionY - 1;

        case 7 :
            newPosition.first = positionX - 1;
            newPosition.second = positionY - 1;

        case 8 :
            newPosition.first = positionX - 1;
            newPosition.second = positionY;
    }
    this->setPosition(newPosition);
}