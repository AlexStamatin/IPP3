#ifndef AvatarState_H
#define AvatarState_H
#include "IAttackState.h"

class AvatarState: public IAttackState
{
    virtual float getDamage(float baseDMG)override
    {
        return baseDMG*1.5;
    }
};


#endif // AvatarState_H
