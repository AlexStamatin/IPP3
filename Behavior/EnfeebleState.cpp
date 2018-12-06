#ifndef EnfeebleState_H
#define EnfeebleState_H
#include "IAttackState.h"
#include "BerserkState.cpp"
class EnfeebleState: public IAttackState
{
        virtual float getDamage(float baseDMG)override
    {
        return baseDMG*0.5;
    }
};

#endif // EnfeebleState_H
