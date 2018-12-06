#ifndef DivineArmour_H
#define DivineArmour_H
#include "DamageReduction.cpp"

class DivineArmour: public DamageReduction
{
        public:
    virtual float getReduced(float dmg)override
    {
        return 0.1*dmg;
    }
    virtual string getType() override
    {
        return "Divine Armour";
    }
};
#endif // DivineArmour_H
