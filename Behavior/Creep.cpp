#ifndef Creep_H
#define Creep_H
#include <iostream>
#include "IBuffable.h"
using namespace std;

class Creep: public IBuffable
{
public:
    void appBuff() override
    {
        cout<<"Unit buffed"<<endl;
    }
    void remBuff() override
    {
        cout<<"Buff removed from Unit"<<endl;
    }
};
#endif // Creep_H
