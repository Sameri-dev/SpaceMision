#ifndef DOCTOR_H
#define DOCTOR_H
#include <iostream>
#include "Astronaut.h"

using namespace std;

class Doctor : public Astronaut
{
    protected:
        int medicine;
    public:
        Doctor();

        float heal();

        virtual ~Doctor();
};

#endif // DOCTOR_H
