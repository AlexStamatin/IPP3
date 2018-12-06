#ifndef Hero_H
#define Hero_H
#include "IAttackState.h"
class Hero
{
protected:
    float baseDMG = 100;
    IAttackState* state;
public:
    Hero(IAttackState* st):state(st){}

    void increase(float dmg)
    {
        baseDMG += dmg;
    }

    float attack()
    {
        return state->getDamage(baseDMG);
    }
    void setState(IAttackState* st)
    {
        state = st;
    }
    float getBase()
    {
        return baseDMG;
    }

};


#endif // Hero_H
