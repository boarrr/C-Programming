/*
  Description: A simple shooting game coded in C using the SDL library.
  Author: Ryan Pitman
*/

#include "structs.h"
#include "initialise.c"
#include "inputs.c"
#include "draw.c"

App app;
Entity player;
Entity bullet;

int main(void)
{
  memset(&app, 0, sizeof(App));
  memset(&player, 0, sizeof(Entity));
  memset(&bullet, 0, sizeof(Entity));
  
  // Initialise the window
  initWindow();

  // Load the background texture
  app.background = loadTexture("Assets/space.jpeg");

  // Load the player texture and set the player's position
  player.x = (SCREEN_WIDTH / 2) - 100;
  player.y = (SCREEN_HEIGHT) - 150;
  player.texture = loadTexture("Assets/player.png");

  // Load the bullet texture
  bullet.texture = loadTexture("Assets/bullet.png");

  // Clean up when the program exits
  atexit(cleanup);

  // Main game loop
  while(1)
  {
    prepareScene();

    getInput();

    blit(player.texture, player.x, player.y, 0);

    if (bullet.health > 0)
    {
      blit(bullet.texture, bullet.x, bullet.y, -90);
    }

    presentScene();

    SDL_Delay(16); // 16 milliseconds is roughly 60 frames per second
  }

  return 0;
}