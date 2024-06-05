#include "Food.h"

Food::Food(int amount) : Supply(amount)
{

}

void Food::use()
{
    cout << "Using" << amount << "of food" << endl;
}

Food::~Food()
{
    //dtor
}
