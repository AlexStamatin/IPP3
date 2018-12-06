#ifndef IObserver_H
#define IObserver_H
#include "Server.cpp"

class IObserver
{
public:
    virtual void ServerOpening(Server& serv) = 0;
};


#endif
