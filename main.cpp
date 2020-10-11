#include <SDL2/SDL.h>
#include "main.h"

SDL_Window *window = NULL;

int main() {
    SDL_Init(SDL_INIT_VIDEO);

    window = SDL_CreateWindow(WindowName, 100, 100, ScreenWidth, ScreenHeight, SDL_WINDOW_SHOWN|SDL_WINDOW_OPENGL);

    SDL_GLContext glContext = SDL_GL_CreateContext(window);

    return 0;
}
