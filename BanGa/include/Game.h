#include <SDL.h>

#ifndef GAME_H
#define GAME_H

class Game
{
public:
    Game();
    ~Game();
    bool init();
    void close();
    bool loadImage();

private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    bool running;


};
#endif // GAME_H
