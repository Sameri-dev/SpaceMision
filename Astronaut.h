#ifndef ASTRONAUT_H
#define ASTRONAUT_H
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Astronaut
{
    protected:
        string name;
        float health;

    public:
        Astronaut(string name, int salud);

        virtual void Status();

        virtual void interact() = 0;

        float getHealth(int amount);

        void setHealth(int newHealth);
};

#endif // ASTRONAUT_H
