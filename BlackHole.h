#ifndef BLACKHOLE_H
#define BLACKHOLE_H
#include <iostream>
#include <cstdlib>

#include "Event.h"

using namespace std;

class BlackHole : public Event
{
    public:
        BlackHole();

        void happen(Ship &nave, vector<Astronaut*> &tripulacion) override;

        virtual ~BlackHole();
};

#endif // BLACKHOLE_H
