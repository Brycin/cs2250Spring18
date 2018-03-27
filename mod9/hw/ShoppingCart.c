/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.c
 *
 *    Description:  ShoppingCart functions
 *
 *        Version:  1.0
 *        Created:  03/27/2018 09:16:13 AM
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
#include "ShoppingCart.h"

// Constants

// Function Prototypes


// Function Definitions

/*
 * ===  FUNCTION  ======================================================================
 *         Name:  AddItem
 *  Description:  Add an ItemToPurchase to the Shopping Cart then Increment cartSize
 * =====================================================================================
 */

ShoppingCart AddItem(ItemToPurchase item, ShoppingCart cart)
{
    printf("ADD ITEM TO CART\n");
    printf("Enter the item name:\n");
    fgets(item.itemName, 50, stdin);
    printf("Enter the item description:");
    fgets(item.itemDescription, 50, stdin);
    printf("Enter the item price:\n");
    scanf("%d", &item.itemPrice);
    printf("Enter the item quantity:\n");
    scanf("%d", &item.itemQuantity);
    strcpy(cart.cartItems[cart.cartSize].itemName, item.itemName);
    strcpy(cart.cartItems[cart.cartSize].itemDescription, item.itemDescription);
    cart.cartItems[cart.cartSize].itemPrice = item.itemPrice;
    cart.cartItems[cart.cartSize].itemQuantity = item.itemQuantity;

    ++cart.cartSize;
    return cart;
}


/*
 * ===  FUNCTION  ======================================================================
 *         Name:  RemoveItem
 *  Description:  Remove an ItemToPurchase based on the name from Shopping Cart then Decrement cartSize
 * =====================================================================================
 */

ShoppingCart RemoveItem(char name[], ShoppingCart cart)
{
    // 1) String compare (strcmp) to find the item
    //What to compare to: cart.cartItems[Index].name
    // 2) IF you find it adjust your index in the array so you dont have a blank space
    //    cart.cartItems[i] = cart.cartItems[i+1;
    // ELSE print to error

    int i = 0;
    char deleteItem[50];
    printf("REMOVE ITEM FROM CART\n");
    printf("Enter the item name:\n");
    fgets(deleteItem, 50, stdin);
    for(i = i; i < cart.cartSize; ++i);
    {
        if(strcmp(deleteItem, cart.cartItems[i].itemName) == 0)
        {
            for(i = i; i < cart.cartSize - 1; ++i)
            {
                cart.cartItems[i] = cart.cartItems[i + 1];
                --cart.cartSize;
            }
        }
        else
        {
            printf("Item not found in cart. Nothing removed.\n");
        }
    }

    return cart;

}


/*
 * ===  FUNCTION  ======================================================================
 *         Name:  ModifyItem
 *  Description:  Modifies the ItemToPurchase description, price, and/or quantity
 * ====================================================================================
 */

ShoppingCart ModifyItem(ItemToPurchase item, ShoppingCart cart)
{
    char modItem[50];
    int modQuantity;
    int i = 0;

    printf("CHANGE ITEM QUANTITY\n");
    printf("Enter the item name:\n");
    fgets(modItem, 50, stdin);
    printf("Enter new quantity:\n");
    scanf("%d", &modQuantity);

    for(i = i; i < cart.cartSize; ++i);
    {
        if(strcmp(modItem, cart.cartItems[i].itemName) == 0)
        {
            cart.cartItems[i].itemQuantity = modQuantity;
        }
    }

    return cart;
}

/*
 * ===  FUNCTION  ======================================================================
 *         Name:  GetNumItemsInCart
 *  Description:  Returns the number of objects that are in the cart
 * =====================================================================================
 */

int GetNumItemsInCart(ShoppingCart cart)
{
    int itemTotal = 0;
    for(int i = 0; i < cart.cartSize; ++i)
    {
        itemTotal = itemTotal + cart.cartItems[cart.cartSize].itemQuantity;
    }

    return itemTotal;
}


/*
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintTotal
 *  Description:  Prints the cost of all the items that are in the cart
 * =====================================================================================
 */

void PrintTotal(ShoppingCart cart)
{
    return;
}


/*
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintDescription
 *  Description:  Prints the description of each item in the cart
 * =====================================================================================
 */

void PrintDescriptions(ShoppingCart cart)
{
    return;
}
