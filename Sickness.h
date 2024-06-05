#ifndef SICKNESS_H
#define SICKNESS_H
#include <iostream>

#include "Event.h"
#include "Doctor.h"

using namespace std;

class Sickness : public Event
{
    public:
        Sickness();

        void happen(Ship &nave, vector<Astronaut*> &tripulacion) override;

        virtual ~Sickness();

};

#endif // SICKNESS_H
