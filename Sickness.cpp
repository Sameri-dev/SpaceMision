#include "Sickness.h"

void Sickness::happen(Ship &nave, vector<Astronaut*>& tripulacion)
{
    for (auto& tripulante : tripulacion){
        if(dynamic_cast<Doctor*>(tripulante)==nullptr){
            tripulante -> setHealth(tripulante->getHealth() - 20);
        }
    }
    cout << "A disease outbreak occurred" << endl;
}


Sickness::~Sickness()
{
    //dtor
}
