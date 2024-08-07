#pragma once
#include <vector>


class APlayer;
class AMonster;
class AGoal;
class AFloor;
class AWall;

class UWorld
{
public:
	UWorld();
	~UWorld();

	APlayer* Player;
	AMonster* Monster;
	std::vector<AFloor*> Floors;
	std::vector<AWall*> Walls;

	AGoal* Goal;
};

