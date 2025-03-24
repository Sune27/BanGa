#include <SDL.h>

#include "../include/Game.h"
using namespace std;

Game::Game()
{
    SDL_Window* window = NULL;
    SDL_Renderer* renderer = NULL;
    bool running = false;
}

Game::~Game()
{
    close();
}

