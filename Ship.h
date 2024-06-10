#ifndef SHIP_H
#define SHIP_H
#include <iostream>

using namespace std;

class Ship
{
    protected:
        int Energy;

    public:
        Ship(int Energy);

        void Status();

        void adjustEnergy(int amount);

        int getEnergy();

};

#endif // SHIP_H
