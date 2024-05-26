#ifndef INVESTIGATOR_H
#define INVESTIGATOR_H
#include "Astronaut.h"

using namespace std;

class Investigator : public Astronaut
{
    protected:

    public:
        Investigator();

        float gainFood();
        float gainEnergy();

        virtual ~Investigator();
};

#endif // INVESTIGATOR_H
