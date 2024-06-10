#ifndef DOCTOR_H
#define DOCTOR_H
#include <iostream>
#include <vector>
#include "Astronaut.h"

using namespace std;

class Doctor : public Astronaut
{
    public:
        Doctor(string name, int health);

        void interact(vector<Astronaut*> &tripulacion);
};

#endif // DOCTOR_H
