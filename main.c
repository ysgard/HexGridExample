#include "raylib.h"

int main(void) {
  const int screenWidth = 1200;
  const int screenHeight = 800;
  // Init
  InitWindow(screenWidth, screenHeight, "Hexgrid Experiment");

  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    // Update

    // Draw
    BeginDrawing();

    ClearBackground(BLACK);

    EndDrawing();
  }
  // Deinit
  CloseWindow();

  return 0;
}
