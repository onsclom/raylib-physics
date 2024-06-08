#include "raylib.h"

const int CONSTRAINT_RADIUS = 350;

int main(void)
{
    InitWindow(800, 800, "raylib physics");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);

        // draw circle in middle
        DrawCircle(400, 400, CONSTRAINT_RADIUS, WHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
