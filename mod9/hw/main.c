/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  ShoppingCart Main
 *
 *        Version:  1.0
 *        Created:  03/27/2018 01:56:46 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "ShoppingCart.h"

// Constants

// Function Prototypes

// Main Function
int main()
{
    ItemToPurchase item;
    ShoppingCart cart;
    cart.cartSize = 0;
    MakeItemBlank(&item);
    PrintItemCost(item);
    return 0;
}
// Function Definitions


