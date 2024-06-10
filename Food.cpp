#include "Food.h"

Food::Food(int amount) : Supply(amount)
{

}

void Food::use(Astronaut &astronauta)
{
    if(amount > 0){
        amount --;

        int newHealth = astronauta.getHealth() + 30;
        if(newHealth > 100){
            newHealth = 100;
        }

        astronauta.setHealth(newHealth);
        cout << "Using 1 unit of food...Healt of crew member: " << astronauta.getHealth() << "%" << endl;
    } else {
        cout << "There is no food left..." << endl;
    }
}

Food::~Food()
{
    //dtor
}
