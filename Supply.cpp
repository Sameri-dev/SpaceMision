#include "Supply.h"

Supply::Supply(int amount) : amount(amount)
{
    cout << amount;
}

int Supply::getAmount()
{
    return amount;
}

void Supply::setAmount(int newAmount)
{
    amount = newAmount;
}
