#ifndef EnfeebleStrategy_H
#define EnfeebleStrategy_H
#include "DamageStrategy.h"

class EnfeebleStrategy: public DamageStrategy
{
        virtual float getDamage(float baseDMG)override
    {
        return baseDMG*0.5;
    }
};

#endif // EnfeebleStrategy_H
