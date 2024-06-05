#ifndef ENGINEER_H
#define ENGINEER_H
#include <iostream>
#include "Astronaut.h"

using namespace std;

class Engineer : public Astronaut
{
    public:
        Engineer(string name, int health);

        void interact() override;

        virtual ~Engineer();

};

#endif // ENGINEER_H
