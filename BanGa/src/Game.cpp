#include <SDL.h>
#include <SDL_image.h>
#include "../include/Game.h"
#include "../include/Config.h"
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

bool Game::init()
{
    bool canInitialize = true;
    if(SDL_Init(SDL_INIT_VIDEO < 0))
    {
        cout << "Can not Initialize ! Error : " << SDL_GetError() << endl;
    }else
    {
        window = SDL_CreateWindow(TITLE, VERTICAL_ORIGIN_POSITION, HORIZONTAL_ORIGIN_POSITION, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        if(window == NULL)
        {
            cout << "Can not create SDL_Window. Error : " << SDL_GetError() << endl;
            canInitialize = false;
        }else
        {
            renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED|SDL_RENDERER_PRESENTVSYNC);
            if(renderer == NULL)
            {
                cout << "Can not create SDL_Renderer. Error : " << SDL_GetError() << endl;
                canInitialize = false;
            }else
            {
                SDL_SetRenderDrawColor = (renderer, 255, 255, 255, 255);
                int imgFlags = IMG_INIT_PNG|IMG_INIT_JPG;
                if(!IMG_Init(imgFlags)){
                    cout << "SDL_image could not initialize! SDL_image Error: " << IMG_GetError()<< endl;
                    success = false;
                }
            }
        }
    }
    return canInitialize;
}

void Game::close()
{
   SDL_QUIT();
   IMG_Quit();
}


