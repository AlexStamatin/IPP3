#include <iostream>
#include "Hero.cpp"
#include "DamageStrategy.h"
#include "AvatarStrategy.cpp"
#include "BerserkStrategy.cpp"
#include "EnfeebleStrategy.cpp"

using namespace std;
class StrategyTest
{
    public:
    void TestStr()
    {
        cout<<endl;cout<<"Strategy Pattern"<<endl;
        Hero* Zeus = new Hero(new AvatarStrategy());
        cout<<"Base Hero damage: "<<Zeus->getBase()<<endl;
        cout<<"Avatar buff is applied. Damage: "<<Zeus->attack()<<endl;
        Zeus->setStrategy(new EnfeebleStrategy());
        cout<<"Enfeeble debuff is applied. Damage: "<<Zeus->attack()<<endl;
        Zeus->setStrategy(new BerserkStrategy());
        cout<<"Berserk buff is applied. Damage: "<<Zeus->attack()<<endl;
    }
};

void testPatterns()
{
StrategyTest str;

        str.TestStr();

}


int main()
{
    testPatterns();
}
