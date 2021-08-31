#include "src/Include/Game.h"

void GameLoop() {
	BeginDrawing();
	ClearBackground(RAYWHITE);
	
	EndDrawing();
}

int main(void) {
	Game game(GameLoop);
}