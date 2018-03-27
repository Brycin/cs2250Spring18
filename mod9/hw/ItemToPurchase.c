/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/27/2018 02:22:00 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include "ItemToPurchase.h"

// Constants


// Function Definitions

/*
 * ===  FUNCTION  ======================================================================
 *         Name:  MakeItemBlank
 *  Description:  Initializes each item in ItemToPurchase structure
 * =====================================================================================
 */

void MakeItemBlank(ItemToPurchase* item) //Make sure to dereference when trying to print (->)
{
    strcpy(item->itemName, "none");
    strcpy(item->itemDescription, "none");
    item->itemPrice = 0;
    item->itemQuantity = 0;
    return;
}


/*
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintItemCost
 *  Description:  Prints the total cost of item. Quantity * Price
 * =====================================================================================
 */

void PrintItemCost(ItemToPurchase item)
{
    int cost = (item.itemQuantity * item.itemPrice);
    printf("TOTAL COST\n");
    printf("%s %d @ %d = %d\n", item.itemName, item.itemQuantity, item.itemPrice, cost);
    return;
}


/*
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintItemDescription
 *  Description:  Prints description of all the items
 * =====================================================================================
 */

void PrintItemDescription(ItemToPurchase item)
{
    
    return;
}
