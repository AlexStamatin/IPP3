#ifndef Player_H
#define Player_H
#include "IObserver.cpp"
#include <string>
#include <iostream>
using namespace std;
class Player: public IObserver
{
    string nick;
public:
    Player(string n):nick(n){}
    virtual void ServerOpening(Server& serv) override
    {
        cout<<"Player "<<nick<<"New Server opened "<<serv.getLocation()<<" "<<serv.getPing()<<" ping"<<endl;
    }
};
#endif // Player_H
