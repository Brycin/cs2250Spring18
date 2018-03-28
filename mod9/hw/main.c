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
    ShoppingCart cart;   // ShoppingCart variable for main
    printf("Enter Customer's Name:\n");
    fgets(cart.customerName, 50, stdin);
    printf("Enter Today's Date:\n");
    fgets(cart.currentDate, 50, stdin);
    printf("\n");
    printf("Customer Name: %s\n", cart.customerName);
    printf("Today's Date: %s\n", cart.currentDate);
    char userChar;
    cart.cartSize = 0;   // Initializes number of items in cart to 0
    userChar = PrintMenu(cart); // Gets userChar from PrintMenu
    while(userChar != 'q')
    {
        userChar = PrintMenu(cart);
    }
    return 0;
}
// Function Definitions


