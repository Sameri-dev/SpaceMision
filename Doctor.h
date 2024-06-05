#ifndef DOCTOR_H
#define DOCTOR_H
#include <iostream>
#include "Astronaut.h"

using namespace std;

class Doctor : public Astronaut
{
    public:
        Doctor(string name, int health);

        void interact() override;

        virtual ~Doctor();
};

#endif // DOCTOR_H
