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
//Chain
#include "DamageReduction.cpp"
#include "InflictedDamage.cpp"
#include "NormalArmour.cpp"
#include "FortifiedArmour.cpp"
#include "DivineArmour.cpp"
//Observer
#include "IObserver.cpp"
#include "Player.cpp"
#include "Server.cpp"
#include "Opnenings.cpp"
//Command
#include "IBuffable.h"
#include "ICommand.h"
#include "Creep.cpp"
#include "ApplyBuffCommand.cpp"
#include "RemoveBuffCommand.cpp"
#include "Buff.cpp"

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

class ChainTest
{
public:
    void TestChain()
    {
        cout<<endl;cout<<"Chain Responsibility Pattern"<<endl;
        NormalArmour* norm = new NormalArmour();
        FortifiedArmour* fort = new FortifiedArmour();
        DivineArmour* divine = new DivineArmour();
        norm->setSuccessor(fort);
        fort->setSuccessor(divine);
        norm->receiveDamage(new InflictedDamage(900));
    }
};

class ObsTest
{
public:
    void testObs()
    {
        cout<<endl;cout<<"Observer Pattern"<<endl;
        Player* axe = new Player("Axe");
        Player* bane = new Player("Bane");
        Server serv("Luxembourg",50);
        Openings servs;
        servs.Attach(axe);
        servs.Attach(bane);

        servs.newServ(serv);
    }
};

class ComTest
{
public:
    void testCom()
    {
        cout<<endl;cout<<"Command Pattern"<<endl;
        IBuffable* uni = new Creep();
        ICommand* app = new ApplyBuffCommand(uni);
        ICommand* re = new RemoveBuffCommand(uni);

        Buff* unib = new Buff(app,re);
        unib->apply();
        unib->remov();
    }
};

void testPatterns()
{
StateTest st;
StratTest str;
ChainTest ch;
ObsTest obs;
ComTest com;

        st.TestSt();
        str.TestStrat();
        ch.TestChain();
        obs.testObs();
        com.testCom();

}


int main()
{
    testPatterns();
}
