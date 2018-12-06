#ifndef BerserkState_H
#define BerserkState_H
#include "IAttackState.h"

class BerserkState: public IAttackState
{
        virtual float getDamage(float baseDMG)override
    {
        return baseDMG*3;
    }
};

#endif // BerserkState_H
