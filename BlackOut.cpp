#include "BlackOut.h"

BlackOut::BlackOut()
{
    //ctor
}

void BlackOut::happen(Ship &nave, vector<Astronaut*>& tripulacion)
{
    nave.adjustEnergy(-30);
    cout << "A blackout occurred on the ship" << endl;
}


BlackOut::~BlackOut()
{
    //dtor
}
