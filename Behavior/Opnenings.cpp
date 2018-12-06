#ifndef Openings_H
#define Openings_H
#include "IObserver.cpp"
#include <vector>
using namespace std;
class Openings
{
    vector<IObserver*> observers;

   void Notify(Server& serv)
   {
       for (IObserver* obs : observers)
       {
           obs->ServerOpening(serv);
       }
   }
public:

    void Attach(IObserver* obs)
    {
        observers.push_back(obs);
    }
    void newServ(Server& serv)
    {
        Notify(serv);
    }
};


#endif // Openings_H
