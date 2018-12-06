#ifndef SecondPatchStrat_H
#define SecondPatchStrat_H
#include "IMovespeedStrat.h"

class SecondPatchStrat: public IMovespeedStrat
{
    virtual float getSpeed(int agi, int lv) override
    {
        return agi*2 + lv;
    }
};

#endif // SecondPatchStrat_H
