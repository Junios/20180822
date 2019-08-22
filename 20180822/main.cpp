#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


#define UP			72
#define Down		80
#define Left		75
#define Right		77


int map[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{2,0,0,1,0,0,0,0,0,2},
	{2,1,0,0,0,0,1,0,0,2},
	{2,2,0,0,0,0,0,0,0,2},
	{2,2,0,0,1,0,2,2,0,2},
	{2,0,0,0,1,0,2,0,0,2},
	{2,0,0,0,1,0,0,0,0,2},
	{2,0,0,0,1,0,1,0,0,2},
	{2,0,0,0,1,0,0,0,4,2},
	{1,1,1,1,1,1,1,1,1,1},
};

char MapTile[10] = { ' ', '-', '|', 'P', 'G' };


bool bIsRunning = true;

int PlayerX = 0;
int PlayerY = 0;
int KeyCode = 0;

int OldPlayerX = 0;
int OldPlayerY = 0;

void MapInit()
{
	map[PlayerY][PlayerX] = 3;
}

void PlayerInit()
{
	PlayerX = 1;
	PlayerY = 1;
	OldPlayerX = 1;
	OldPlayerY = 1;
}

void PlayerMove()
{
	if (KeyCode == UP)
	{
		PlayerY--;
	}
	else if (KeyCode == Down)
	{
		PlayerY++;
	}
	else if (KeyCode == Left)
	{
		PlayerX--;
	}
	else if (KeyCode == Right)
	{
		PlayerX++;
	}

	if (map[PlayerY][PlayerX] == 0)
	{
		//이동
		map[OldPlayerY][OldPlayerX] = 0;
		map[PlayerY][PlayerX] = 3;
		OldPlayerX = PlayerX;
		OldPlayerY = PlayerY;
	}
	else
	{
		PlayerX = OldPlayerX;
		PlayerY = OldPlayerY;
	}

	//and &&
	//or ||




}

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

	PlayerMove();
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

void Terminate()
{

}

int main()
{
	PlayerInit();
	MapInit();

	while (bIsRunning)
	{
		Input();
		Process();
		Render();
	}

	Terminate();


	return 0;
}