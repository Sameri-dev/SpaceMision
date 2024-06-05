#include "Astronaut.h"

Astronaut::Astronaut(string name, int salud) : name(name), health(health)
{

}

void Astronaut::Status()
{
    cout << "Crew status" << endl;
    cout << endl << "Name: " << name << endl;
    cout << "Health: " << health << "%" << endl;
}

float Astronaut::getHealth()
{
    return health;
}

void Astronaut::setHealth(int newHealth)
{
    health = newHealth;
}



Astronaut::~Astronaut()
{
    //dtor
}

