#include <iostream>
using namespace std;

#include "ShoppingCart.h"

ShoppingCart::ShoppingCart() 
{
    customerName = "none";
    currentDate = "January 1, 2016";
}

ShoppingCart::ShoppingCart(string name, string date) 
{
    customerName = name;
    currentDate = date;
}

void AddItem(ItemToPurchase item)
{
    new ItemToPurchase(item);
    
    return;
}

void RemoveItem(string name)
{
    return;
}

void ModifyItem(ItemToPurchase item)
{
    return;
}

int GetNumItemsInCart()
{
    int num;

    return num;
}

double GetCostOfCart()
{
    double cost;

    return cost;
}

void PrintTotal()
{
    return;
}

void PrintDescriptions()
{
    return;
}
