#ifndef FortifiedArmour_H
#define FOrtifiedArmour_H
#include "DamageReduction.cpp"


class FortifiedArmour: public DamageReduction
{
    public:
    virtual float getReduced(float dmg)override
    {
        return 0.25*dmg;
    }
    virtual string getType() override
    {
        return "Fortified Armour";
    }
};
#endif // FortifiedArmour_H
