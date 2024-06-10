#include "BlackHole.h"

BlackHole::BlackHole()
{
    //ctor
}

void BlackHole::happen(Ship& nave, vector<Astronaut*>& tripulacion)
{
    int adjustDays = (rand()%20) - 10; //num random entre -10 y 10

    cout << "The ship has passed through a black hole, changing mission days to: " << adjustDays << endl;
}
