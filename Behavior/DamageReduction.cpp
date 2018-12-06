#ifndef DamageReduction_H
#define DamageReduction_H
#include <string>
#include "InflictedDamage.cpp"
#include <iostream>

using namespace std;
class DamageReduction
{
protected:
    DamageReduction* successor;
    int Health = 100;
public:
    virtual float getReduced(float dmg) = 0;
    virtual string getType() = 0;

    void setSuccessor(DamageReduction* succ)
    {
        successor = succ;
    }

    void receiveDamage(InflictedDamage* damage)
    {
        if(Health > this->getReduced(damage->getDamage()))
        {
            cout<<this->getType()<<" can protect against "<<damage->getDamage()<<" damage"<<endl;
        }
        else if (successor)
        {
            successor->receiveDamage(damage);
        }
    }
};

#endif // DamageReduction_H
