#include <SDL.h>
#pragma once

typedef struct 
{
  SDL_Renderer *renderer;
  SDL_Window *window;
  SDL_Texture *background;
  int left;
  int right;
  int shoot;
} App;

typedef struct
{
  int x;
  int y;
  int dx;
  int dy;
  int health;
  SDL_Texture *texture;
} Entity;

extern App app;
extern Entity player;
extern Entity bullet;
