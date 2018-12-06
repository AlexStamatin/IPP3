#ifndef Server_H
#define Server_H
#include <string>

using namespace std;
class Server
{
   string location;
   int ping;
   public:
       Server(string loc, int p):location(loc),ping(p){}
       string getLocation(){return location;}
       int getPing(){return ping;}
};

#endif // ServerOpening_H
