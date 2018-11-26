#ifndef Hero_H
#define Hero_H
#include "DamageStrategy.h"
class Hero
{
protected:
    float baseDMG = 100;
    DamageStrategy* strat;
public:
    Hero(DamageStrategy* str):strat(str){}

    void increase(float dmg)
    {
        baseDMG += dmg;
    }

    float attack()
    {
        return strat->getDamage(baseDMG);
    }
    void setStrategy(DamageStrategy* str)
    {
        strat = str;
    }
    float getBase()
    {
        return baseDMG;
    }
};


#endif // Hero_H
