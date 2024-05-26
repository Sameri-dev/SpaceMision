#ifndef ENGINEER_H
#define ENGINEER_H
#include <iostream>
#include "Astronaut.h"

using namespace std;

class Engineer : public Astronaut
{
    protected:
        int construct();

    public:
        Engineer();

        float repair();
        float worsen();

        virtual ~Engineer();

};

#endif // ENGINEER_H
