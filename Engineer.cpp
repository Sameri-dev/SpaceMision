#include "Engineer.h"

Engineer::Engineer(string name, int health) : Astronaut(name, health)
{

}

void Engineer::interact(Ship &nave)
{
    cout << name << "Reparing the ship" << endl;
    nave.adjustEnergy(20);
    this -> setHealth(this->getHealth()-10);
}
