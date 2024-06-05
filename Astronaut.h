#ifndef ASTRONAUT_H
#define ASTRONAUT_H
#include <string>
#include <iostream>

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

        float getHealth();
        void setHealth(int newHealth);

        virtual ~Astronaut();
};

#endif // ASTRONAUT_H
