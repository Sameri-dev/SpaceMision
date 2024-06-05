#ifndef FOOD_H
#define FOOD_H
#include <iostream>
#include "Supply.h"

using namespace std;

class Food : public Supply
{
    public:
        Food(int amount);

        void use() override;

        virtual ~Food();
};

#endif // FOOD_H
