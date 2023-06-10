#include <stdio.h>
#include <SDL.h>

int main(int argc, char **argv) {
    printf("Hello Tetris!\n");

    SDL_version compiled;
    SDL_version linked;

    SDL_VERSION(&compiled);
    SDL_GetVersion(&linked);
    SDL_Log("We compiled against SDL version %u.%u.%u ...\n",
            compiled.major, compiled.minor, compiled.patch);
    SDL_Log("But we are linking against SDL version %u.%u.%u.\n",
            linked.major, linked.minor, linked.patch);

    return 0;
}