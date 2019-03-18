#include "Knight.h"

void Knight::move(int caseX) {

    int positionX = this->getPositionX();
    int positionY = this->getPositionY();

    pair <int, int> newPosition;

    switch (caseX) {

        case 1 :
            newPosition.first = positionX - 2;
            newPosition.second = positionY + 1;

        case 2 :
            newPosition.first = positionX - 1;
            newPosition.second = positionY + 2;

        case 3 :
            newPosition.first = positionX + 1;
            newPosition.second = positionY + 2;

        case 4 :
            newPosition.first = positionX + 2;
            newPosition.second = positionY + 1;

        case 5 :
            newPosition.first = positionX + 2;
            newPosition.second = positionY - 1;

        case 6 :
            newPosition.first = positionX + 1;
            newPosition.second = positionY - 2;

        case 7 :
            newPosition.first = positionX - 1;
            newPosition.second = positionY - 2;

        case 8 :
            newPosition.first = positionX - 2;
            newPosition.second = positionY - 1;
    }
    this->setPosition(newPosition);
}