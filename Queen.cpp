#include "pch.h"
#include "Queen.h"

void Queen::move(int caseX, int nbTile)
{
	int positionX = this->getPositionX();
	int positionY = this->getPositionY();

	pair <int, int> newPosition;

	switch (caseX) {

	case 1:
		newPosition.first = positionX;
		newPosition.second = positionY + nbTile;

	case 2:
		newPosition.first = positionX + nbTile;
		newPosition.second = positionY;

	case 3:
		newPosition.first = positionX;
		newPosition.second = positionY - nbTile;

	case 4:
		newPosition.first = positionX - nbTile;
		newPosition.second = positionY;

	case 5:
		newPosition.first = positionX - nbTile;
		newPosition.second = positionY + nbTile;

	case 6:
		newPosition.first = positionX + nbTile;
		newPosition.second = positionY + nbTile;

	case 7:
		newPosition.first = positionX + nbTile;
		newPosition.second = positionY - nbTile;

	case 8:
		newPosition.first = positionX - nbTile;
		newPosition.second = positionY - nbTile;
	}
	this->setPosition(newPosition);
}