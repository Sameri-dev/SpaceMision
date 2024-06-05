#include "Doctor.h"

Doctor::Doctor(string name, int health) : Astronaut(name, health)
{
    cout << name << "healing the crew" << endl;
}

void Doctor::interact()
{

}


Doctor::~Doctor()
{
    //dtor
}
