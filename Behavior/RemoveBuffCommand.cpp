#ifndef RemoveBuffCommand_H
#define RemoveBuffCommand_H
#include "ICommand.h"
#include "IBuffable.h"
class RemoveBuffCommand: public ICommand
{
        IBuffable* buf;
public:
    RemoveBuffCommand(IBuffable* b):buf(b){}

    void Execute() override
    {
        buf->remBuff();
    }

};
#endif // RemoveBuffCommand_H
