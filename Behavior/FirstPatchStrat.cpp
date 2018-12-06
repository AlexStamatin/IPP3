#ifndef FirstPatchStrat_H
#define FirstPatchStrat_H
#include "IMovespeedStrat.h"

class FirstPatchStrat: public IMovespeedStrat
{
public:
    virtual float getSpeed(int agi, int lv) override
    {
        return agi*0.5 + lv*3;
    }
};

#endif // FirstPatchStrat_H
