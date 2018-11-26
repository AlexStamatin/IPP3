#ifndef AvatarStrategy_H
#define AvatarStrategy_H
#include "DamageStrategy.h"

class AvatarStrategy: public DamageStrategy
{
    virtual float getDamage(float baseDMG)override
    {
        return baseDMG*1.5;
    }
};


#endif // AvatarStrategy_H
