#include "w_window.h"

SDL_Window *sdl_window = NULL;

void W_Init(const unsigned int winw, const unsigned int winh)
{
    SDL_Init(SDL_INIT_VIDEO);
    sdl_window = SDL_CreateWindow(
        "Engine",
        winw,
        winh,
        SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE
    );
}

void W_Shutdown()
{
    SDL_DestroyWindow(sdl_window);
    SDL_Quit();
}

SDL_Window* W_Get()
{
    return sdl_window;
}