#ifndef STEPS_ON_TILES_H
#define STEPS_ON_TILES_H

#include "mob.h"
#include "component.h"
#include "tilemap.h"

/*
    Every time the mob steps on a new tile, it calls the "steppedOn()" method for that tile
*/

namespace Component
{

class Steps_On_Tiles : public Component_Base
{
    public:
        Steps_On_Tiles( Mob* mob, Tile_Map* tile_map );

        void
        logic ( const float dt ) override;

    private:
        Mob*            m_mob;
        Tile_Map*       m_tileMap;

        sf::Vector2i    m_mobsCurrTilePos;
};

} // Namespace component

#endif // STEPS_ON_TILES_H