#ifndef InflictedDamage_H
#define InflictedDamage_H

class InflictedDamage
{
    float dmg;

public:
    InflictedDamage(float d):dmg(d){}

    float getDamage()
    {
        return dmg;
    }
    void setDamage(float d)
    {
        dmg = d;
    }
};
#endif // InflictedDamage_H
