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
	{2,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,2},
	{1,1,1,1,1,1,1,1,1,1},
};

char MapTile[10] = { ' ', '-', '|', 'P' };


bool bIsRunning = true;

int PlayerX = 0;
int PlayerY = 0;
int KeyCode = 0;

void PlayerInit()
{
	PlayerX = 1;
	PlayerY = 1;
}

void PlayerMove()
{
	int OldPlayerX = PlayerX;
	int OldPlayerY = PlayerY;

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

	map[OldPlayerY][OldPlayerX] = 0;
	map[PlayerY][PlayerX] = 3;

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
	//else if (KeyCode == 224)
	//{
	//	return;
	//}

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

	while (bIsRunning)
	{
		Input();
		Render();
		Process();
	}

	Terminate();


	return 0;
}