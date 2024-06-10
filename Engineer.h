#ifndef ENGINEER_H
#define ENGINEER_H
#include <iostream>
#include <vector>
#include "Astronaut.h"
#include "Ship.h"
using namespace std;

class Engineer : public Astronaut
{
    public:
        Engineer(string name, int health);

        void interact(Ship &nave);
};

#endif // ENGINEER_H
