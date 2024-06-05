#include "Energy.h"

Energy::Energy(int amount) : Supply(amount)
{

}

void Energy::use()
{
    cout << "Using: " << amount << "energy" << endl;
}

Energy::~Energy()
{
    //dtor
}
