#pragma once
#include <stdlib.h>
#include <time.h>
#include "Map.h"

#ifndef __Monster_H__
#define __Monster_H__

extern int MonsterX;
extern int MonsterY;
extern int OldMonsterX;
extern int OldMonsterY;

void InitMonster(int StartX, int StartY);
void MoveMonster();
#endif