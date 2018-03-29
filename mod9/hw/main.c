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
    for(int i = 0; i < 10; ++i)
    {
        MakeItemBlank(&cart.cartItems[i]); //Initialize Array
    }
    printf("Enter Customer's Name:\n");
    fgets(cart.customerName, 50, stdin);
    for(int i = 0; i < sizeof(cart.customerName); ++i)
    {
        if(cart.customerName[i] == '\n')
        {
            cart.customerName[i] = '\0';
        }
    }
    printf("Enter Today's Date:\n");
    fgets(cart.currentDate, 50, stdin);
    for(int i = 0; i < sizeof(cart.currentDate); ++i)
    {
        if(cart.currentDate[i] == '\n')
        {
            cart.currentDate[i] = '\0';
        }
    }
    printf("\n");
    printf("Customer Name: %s\n", cart.customerName);
    printf("Today's Date: %s\n", cart.currentDate);
    char userChar;
    cart.cartSize = 0;   // Initializes number of items in cart to 0
    userChar = PrintMenu(&cart); // Gets userChar from PrintMenu
    while(userChar != 'q')
    {
        userChar = PrintMenu(&cart);
    }
    return 0;
}
// Function Definitions


