#include "Doctor.h"

Doctor::Doctor(string name, int health) : Astronaut(name, health)
{
}

void Doctor::interact(vector<Astronaut*> &tripulacion)
{
    cout << name << "healing the crew" << endl;

    for (auto& tripulante : tripulacion){
        if (tripulante != this){
            int newHealth = tripulante -> getHealth() + 20;
            if (newHealth > 100){
                newHealth = 100;
            }

            tripulante -> setHealth(newHealth);
        }
    }
    this -> setHealth(this->getHealth()-10);
}
