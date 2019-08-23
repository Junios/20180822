#pragma once

#include "Player.h"

#ifndef __Map_H__
#define __Map_H__

extern int map[10][10];
extern char MapTile[10];

extern int GoalX;
extern int GoalY;

void InitGoal();
void InitMap();

#endif