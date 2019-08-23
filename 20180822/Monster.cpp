#include "Monster.h"

int MonsterX = 0;
int MonsterY = 0;
int OldMonsterX = 0;
int OldMonsterY = 0;

void InitMonster(int StartX, int StartY)
{
	MonsterX = StartX;
	MonsterY = StartY;
	OldMonsterX = StartX;
	OldMonsterY = StartY;

	srand(time(nullptr));
}

void MoveMonster()
{
	int Direction = rand() % 4;

	if (Direction == 0)
	{
		MonsterY--;
	}
	else if (Direction == 1)
	{
		MonsterY++;
	}
	else if (Direction == 2)
	{
		MonsterX--;
	}
	else if (Direction == 3)
	{
		MonsterX++;
	}

	if (map[MonsterY][MonsterX] == 0
		|| map[MonsterY][MonsterX] == 3)
	{
		//¿Ãµø
		map[OldMonsterY][OldMonsterX] = 0;
		map[MonsterY][MonsterX] = 5;
		OldMonsterX = MonsterX;
		OldMonsterY = MonsterY;
	}
	else
	{
		MonsterX = OldMonsterX;
		MonsterY = OldMonsterY;
	}

}
