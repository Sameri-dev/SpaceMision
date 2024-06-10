#ifndef SUPPLY_H
#define SUPPLY_H
#include <iostream>
#include "Astronaut.h"
#include "Ship.h"

using namespace std;

class Supply
{
    protected:
        int amount;
    public:
        Supply(int amount);

        int getAmount();
        void setAmount(int newAmount);
};

#endif // SUPPLY_H
