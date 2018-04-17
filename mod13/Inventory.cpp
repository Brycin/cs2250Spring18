/*
 * =====================================================================================
 *
 *       Filename:  Inventory.cpp
 *
 *    Description:  Inventory Class Definitions
 *
 *        Version:  1.0
 *        Created:  04/17/2018 09:29:28 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h>  //For C
#include <iostream>   //For C++
#include <vector>
#include <string>
using namespace std;  //For C++
#include "Inventory.h"

// Constants

// Function Prototypes

// Function Definitions

// InventoryItem Constructor
InventoryItem::InventoryItem(string initName, int initQty)
{
    itemName = initName;
    itemQuantity = initQty;

    return;
}

//InventoryItem function to print name/qty attributes
void InventoryItem::PrintItem()
{
    cout << "name: " << this->itemName << ", " << "quantity: "
        << this->itemQuantity << endl;

    return;
}

