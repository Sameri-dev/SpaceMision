#ifndef SUPPLY_H
#define SUPPLY_H
#include <iostream>

using namespace std;

class Supply
{
    protected:
        int amount;
    public:
        Supply(int amount);

        virtual void use() = 0;

        virtual ~Supply();
};

#endif // SUPPLY_H
