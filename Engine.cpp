#include "Engine.h"
#include "World.h"
#include "Wall.h"
#include "Floor.h"
#include "Player.h"
#include "Goal.h"
#include "Monster.h"

UEngine::UEngine()
{
}

UEngine::~UEngine()
{
}

void UEngine::OpenLevel()
{
	//Memory(Array), Disk(File), Network
	int Map[10][10] = {
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
	};

	for (int Y = 0; Y < 10; ++Y)
	{
		for (int X = 0; X < 10; ++X)
		{
			if (Map[Y][X] == 1)
			{
				World->Walls.push_back(new AWall());
			}
			else if (Map[Y][X] == 0)
			{
				World->Floors.push_back(new AFloor());
			}
		}
	}

	World->Player = new APlayer();
	World->Goal = new AGoal();
	World->Monster = new AMonster();


}

void UEngine::Run()
{
	//while (true)
	//{
	//	World->Walls->Tick();
	//	World->Floors->Tick();

	//	Player->Tick();
	//	Goal->Tick();
	//	Monster->Tick();
	//}
}
