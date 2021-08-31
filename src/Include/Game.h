#pragma once
#include <iostream>
#include <vector>
#include "src/Include/Objects.h"
#include <raylib.h>

class Game {
public:
	std::vector<Entity> entities;
	Game::Game(void(*handler)());
};