#pragma once

#include <conio.h>
#include "Player.h"
#include "Monster.h"
#include "Map.h"
#include <stdio.h>
#include <stdlib.h>

#ifndef __Engine_H__
#define __Engine_H__

extern bool bIsRunning;
extern int KeyCode;

void CheckRule();
void Input();
void Process();
void CheckRule();
void Render();
void Initialize();
void Tick();
void Terminate();
#endif