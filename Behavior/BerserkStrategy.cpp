#ifndef BerserkStrategy_H
#define BerserkStrategy_H
#include "DamageStrategy.h"

class BerserkStrategy: public DamageStrategy
{
        virtual float getDamage(float baseDMG)override
    {
        return baseDMG*3;
    }
};

#endif // BerserkStrategy_H
