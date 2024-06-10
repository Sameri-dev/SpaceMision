#include "Energy.h"

Energy::Energy(int amount) : Supply(amount)
{

}

void Energy::use(Ship &nave)
{
    if(amount > 0){
        amount --;
        nave.adjustEnergy(30);
    }
    cout << "Using: " << amount << "energy" << endl;
    cout << "Ship's energy upto: " << nave.getEnergy << endl;
}

Energy::~Energy()
{
    //dtor
}
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
