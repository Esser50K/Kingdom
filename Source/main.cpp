#include "game.h"

/*
    To do:
        *   Player movement feels odd. The player is too slow on grass and too fast on ice.
            Needs to be able to move but still have friction on the tiles.
        *   Do something about the repeated code in the "Tile_Collidable" class
        *   Create a shark texture
        *   Combine spawns_ground and spawns_sea somehow
        *   Improve level gen
        *   Animation for the "swimmable" class ( Res/Effects/Water Splash.png") or make the particle system look good
*/

int main()
{

    srand(time(NULL));

    Game game;

    game.runLoop();

    return 0;
}
