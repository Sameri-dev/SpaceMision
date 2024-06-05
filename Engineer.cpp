#include "Engineer.h"

Engineer::Engineer(string name, int health) : Astronaut(name, health)
{

}

void Engineer::interact()
{
    cout << name << "reparing the ship" << endl;
}

Engineer::~Engineer()
{
    //dtor
}

