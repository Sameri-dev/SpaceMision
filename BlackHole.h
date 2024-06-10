#ifndef BLACKOUT_H
#define BLACKOUT_H
#include <iostream>
#include "Event.h"

using namespace std;

class BlackOut: public Event
{
    public:
        BlackOut();

        void happen(Ship &nave, vector<Astronaut*> &tripulacion) override;
};

#endif // BLACKOUT_H
