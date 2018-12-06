#include <iostream>
//State
#include "Hero.cpp"
#include "IAttackState.h"
#include "AvatarState.cpp"
#include "BerserkState.cpp"
#include "EnfeebleState.cpp"
//Strategy
#include "IMovespeedStrat.h"
#include "FirstPatchStrat.cpp"
#include "SecondPatchStrat.cpp"
#include "Unit.cpp"

using namespace std;
class StateTest
{
    public:
    void TestSt()
    {
        cout<<endl;cout<<"State Pattern"<<endl;
        Hero* Zeus = new Hero(new AvatarState());
        cout<<"Base Hero damage: "<<Zeus->getBase()<<endl;
        cout<<"Avatar buff is applied. Damage: "<<Zeus->attack()<<endl;
        Zeus->setState(new EnfeebleState());
        cout<<"Enfeeble debuff is applied. Damage: "<<Zeus->attack()<<endl;
        Zeus->setState(new BerserkState());
        cout<<"Berserk buff is applied. Damage: "<<Zeus->attack()<<endl;
    }
};

class StratTest
{
public:
    void TestStrat()
    {
        cout<<endl;cout<<"Strategy Pattern"<<endl;
        IMovespeedStrat* lvStrat = new FirstPatchStrat();
        IMovespeedStrat* agiStrat = new SecondPatchStrat();

        Unit* Orc = new Unit(10,5,lvStrat);
        cout<<"First Game Patch"<<endl;
        Orc->movespeed();
        cout<<"Game updated to Patch 2"<<endl;
        Orc->setStrat(agiStrat);
        Orc->movespeed();

    }
};

void testPatterns()
{
StateTest st;
StratTest str;

        st.TestSt();
        str.TestStrat();

}


int main()
{
    testPatterns();
}
