#include "Engine.h"
#include "Monster.h"
#include "Player.h"
#include "Map.h"

int main()
{
	Initialize();

	while (bIsRunning)
	{
		Tick();
	}

	Terminate();

	return 0;
}