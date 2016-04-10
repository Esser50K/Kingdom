#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "enemy_mob.h"


typedef std::unique_ptr<Mob> MobPtr;
typedef std::vector<MobPtr> MobPtrVec;

class Zombie : public Enemy_Mob
{
    public:
        Zombie( Game* game, Tile_Map* tiles, Player* player, MobPtrVec* mobVec );

    private:
        void
        uniqueLogic         ( const float dt ) override;
};

#endif // ZOMBIE_H
