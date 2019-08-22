#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

char MapTile[10] = { ' ', '-', '|' };

void Input()
{

}

void Process()
{

}

void Render()
{
	system("cls");

	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			printf("%c", MapTile[map[y][x]]);
		}
		printf("\n");
	}
}

int main()
{
	while (true)
	{
		Input();
		Render();
		Process();
	}


	return 0;
}