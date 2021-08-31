#include "src/Include/Game.h"

Game::Game(void(*handler)()) {
	InitWindow(1000, 800, "Application");
	while (!WindowShouldClose()) {
		handler();
	}
	CloseWindow();
}