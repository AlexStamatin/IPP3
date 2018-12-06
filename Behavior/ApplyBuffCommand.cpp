#ifndef ApplyBuffCommand_H
#define ApplyBuffCommand_H
#include "ICommand.h"
#include "IBuffable.h"

class ApplyBuffCommand: public ICommand
{
    IBuffable* buf;
public:
    ApplyBuffCommand(IBuffable* b):buf(b){}

    void Execute() override
    {
        buf->appBuff();
    }

};

#endif // ApplyBuffCommand_H
