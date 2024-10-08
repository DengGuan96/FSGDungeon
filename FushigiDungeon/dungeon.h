#pragma once
#include "GameObject.h"

class Dungeon : public GameObject
{
public:
	Dungeon(class Game* game);
	void NewFloor();

	class Map* GetMap() const { return mMap; }
	int GetFloor() const { return mFloor; }

private:
	class Map* mMap;
	int mFloor;
	int mWidth;
	int mHeight;
};