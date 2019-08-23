#pragma once
#include "Engine.h"
#include "Map.h"

#ifndef __Player_H__
#define __Player_H__

#define UP			72
#define Down		80
#define Left		75
#define Right		77

extern int PlayerX;
extern int PlayerY;
extern int OldPlayerX;
extern int OldPlayerY;

void InitPlayer();
void MovePlayer();
#endif