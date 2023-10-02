#include "map.h"
#include "apple.h"
#include "snake.h"
#pragma once

class engine
{
	snake _snake;
	map _map;
	apple _apple;

public:
	engine();
	void Play();
};