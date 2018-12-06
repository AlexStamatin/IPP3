#ifndef Unit_H
#define Unit_H
#include "IMovespeedStrat.h"
#include <iostream>

using namespace std;
class Unit
{
    int agi = 0;
    int lv = 1;
    IMovespeedStrat* strat;
public:
    Unit(int ag, int l,IMovespeedStrat* str):agi(ag),lv(l),strat(str){}

    void setAgi(int ag)
    {
        this->agi = ag;
    }

    void setLvl(int l)
    {
        this->lv = l;
    }

    void movespeed()
    {
        cout<<"Moving with "<<strat->getSpeed(this->agi,this->lv)<<" movement speed"<<endl;
    }
        void setStrat(IMovespeedStrat* str)
    {
        strat = str;
    }
};

#endif // Unit_H
