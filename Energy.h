#ifndef ENERGY_H
#define ENERGY_H
#include <iostream>
#include "Supply.h"

using namespace std;

class Energy : public Supply
{
    private:

    public:
        Energy(int amount);

        void use() override;

        virtual ~Energy();
};

#endif // ENERGY_H
