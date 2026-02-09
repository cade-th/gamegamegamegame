TO RUN:

Install raylib
```
pacman -S raylib
``` 
then do
```
make && make run
```

should just have a window which means u can now use raylib hooray


STACK:
1. Raylib (cross platform graphics): https://www.raylib.com/
2. EnTT (Entity Component System): https://github.com/skypjack/entt
- NOTE: the reason for an entity component system is cuz every game engine and basically every game uses one and whatever we do we'll probably end up re-inventing an entity-component system so we might as well use one
3. Cpp (language) 
4. Probably CMake (build system)

TODO: 
1. Setup build that works on both windows and linux
2. Make a window appear with this raylib example code:

```
#include "raylib.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
    }
    CloseWindow();        // Close window and OpenGL context
    return 0;
}
```

