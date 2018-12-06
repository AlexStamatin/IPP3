#ifndef Buff_H
#define Buff_H
#include "ICommand.h"

class Buff
{
    ICommand* application;
    ICommand* removal;

public:
    Buff(ICommand*  apply, ICommand* rem):application(apply),removal(rem){}

    void apply()
    {
        this->application->Execute();
    }

    void remov()
    {
        this->removal->Execute();
    }
};

#endif // Buff_H
