#ifndef NormalArmour_H
#define NormalArmour_H
#include "DamageReduction.cpp"
#include <string>
class NormalArmour: public DamageReduction
{
    public:
    virtual float getReduced(float dmg)override
    {
        return 0.5*dmg;
    }
    virtual string getType() override
    {
        return "Normal Armour";
    }


};

#endif // NormalArmour_H
