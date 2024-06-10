#ifndef EVENT_H
#define EVENT_H
#include <iostream>
#include <vector>

#include "Ship.h"
#include "Astronaut.h"

using namespace std;

class Event
{
    public:
        Event();

        virtual void happen(Ship &nave, vector<Astronaut*> &tripulacion) = 0;

};

#endif // EVENT_H
