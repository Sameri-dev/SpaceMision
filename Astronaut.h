#ifndef LEADER_H
#define LEADER_H
#include "Astronaut.h"

using namespace std;

class Leader : public Astronaut
{
    protected:
        bool lead();

    public:
        Leader();

        bool checkife();

        virtual ~Leader();

};

#endif // LEADER_H
