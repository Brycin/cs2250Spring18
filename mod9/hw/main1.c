/*
 * =====================================================================================
 *
 *       Filename:  main1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/28/2018 10:19:22 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "ItemToPurchase.h"

// Constants

// Function Prototypes

// Main Function
int main()
{
    ItemToPurchase item1;
    ItemToPurchase item2;
    printf("Item 1\n");
    printf("Enter the item name:\n");
    fgets(item1.itemName, sizeof(item1.itemName), stdin);
    for(int i = 0; i < sizeof(item1.itemName); ++i)
    {
        if(item1.itemName[i] == '\n')
        {
            item1.itemName[i] = '\0';
        }
    }
    printf("Enter the item price:\n");
    scanf(" %d", &item1.itemPrice);
    printf("Enter the item quantity:\n");
    scanf(" %d", &item1.itemQuantity);
    getchar();
    printf("\n");
    printf("Item 2\n");
    printf("Enter the item name:\n");
    fgets(item2.itemName, sizeof(item2.itemName), stdin);
    for(int i = 0; i < sizeof(item2.itemName); ++i)
    {
        if(item2.itemName[i] == '\n')
        {
            item2.itemName[i] = '\0';
        }
    }
    printf("Enter the item price:\n");
    scanf(" %d", &item2.itemPrice);
    printf("Enter the item quantity:\n\n");
    scanf(" %d", &item2.itemQuantity);

    printf("TOTAL COST\n");
    PrintItemCost(item1);
    PrintItemCost(item2);
    printf("\n");
    printf("Total: $%d\n", (item1.itemPrice * item1.itemQuantity) + (item2.itemPrice * item2.itemQuantity));

    return 0;
}
// Function Definitions


