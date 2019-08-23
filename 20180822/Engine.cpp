#include "Engine.h"

bool bIsRunning = true;
int KeyCode = 0;

void Input()
{
	KeyCode = getch();
}

void Process()
{
	if (KeyCode == 'q')
	{
		bIsRunning = false;
	}
	else if (KeyCode == 224)
	{
		return;
	}

	MovePlayer();
	MoveMonster();
	CheckRule();
}

void CheckRule()
{
	if (PlayerX == GoalX && PlayerY == GoalY)
	{
		//escape
		bIsRunning = false;
	}

	if (PlayerX == MonsterX && PlayerY == MonsterY)
	{
		//Dead
		bIsRunning = false;
	}
}

void Render()
{
	system("cls");

	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			printf("%c ", MapTile[map[y][x]]);
		}
		printf("\n");
	}
}

void Initialize()
{
	InitGoal();
	InitMonster(5, 5);
	InitPlayer();
	InitMap();
}

void Tick()
{
	Input();
	Process();
	Render();
}

void Terminate()
{

}
