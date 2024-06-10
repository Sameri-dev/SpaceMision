#include "Ship.h"

Ship::Ship(int Energy) : Energy(Energy)
{

}

void Ship::Status()
{
    cout << "Ship power: " << Energy << "%" << endl;
}

void Ship::adjustEnergy(int amount)
{
    Energy += amount;

    if (Energy > 100) Energy = 100;
    if (Energy < 0) Energy = 0;

}

int Ship::getEnergy()
{
    return Energy;
}
