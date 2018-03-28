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
    for(i = i; i < cart.cartSize; ++i);
    {
        if(strcmp(name, cart.cartItems[i].itemName) == 0)
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
    int i = 0;
    for(i = i; i < cart.cartSize; ++i);
    {
        if(strcmp(item.itemName, cart.cartItems[i].itemName) == 0)
        {
            cart.cartItems[i].itemQuantity = item.itemQuantity;
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
        itemTotal = itemTotal + cart.cartItems[i].itemQuantity;
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
    int numItems = GetNumItemsInCart(cart);
    int cartTotal = 0;
    printf("%s's Shopping Cart - %s\n", cart.customerName, cart.currentDate);
    printf("Number of Items: %d\n", numItems);
    printf("\n");
    for(int i = 0; i < cart.cartSize; ++i)
    {
        PrintItemCost(cart.cartItems[i]);
    }
    for(int i = 0; i < cart.cartSize; ++i)
    {
        cartTotal = cartTotal + (cart.cartItems[i].itemPrice * cart.cartItems[i].itemQuantity);
    }
    printf("Total: $%d\n", cartTotal);
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
    printf("%s's Shopping Cart - %s\n", cart.customerName, cart.currentDate);
    printf("\n");
    printf("Item Descriptions\n");
    for(int i = 0; i < cart.cartSize; ++i)
    {
    PrintItemDescription(cart.cartItems[i]);
    }

    return;
}

/*
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintMenu
 *  Description:  Outputs MENU and calls functions based on user input
 *                Continues to be called until user inputs 'q'
 * =====================================================================================
 */
char PrintMenu(ShoppingCart* cart)
{
    char userChar;
    printf("MENU\n");
    printf("a - Add item to cart\n");
    printf("r - Remove item from cart\n");
    printf("c - Change item quantity\n");
    printf("i - Output items' descriptions\n");
    printf("o - Output shopping cart\n");
    printf("q - Quit\n");
    printf("\n");
    printf("Choose an option:\n");
    scanf(" %c", &userChar);

    if(userChar == 'a')
    {
        getchar();
        ItemToPurchase item;
        printf("ADD ITEM TO CART\n");
        printf("Enter the item name:\n");
        fgets(item.itemName, 50, stdin);
        printf("Enter the item description:\n");
        fgets(item.itemDescription, 50, stdin);
        printf("Enter the item price:\n");
        scanf(" %d", &item.itemPrice);
        printf("Enter the item quantity:\n");
        getchar();
        scanf(" %d", &item.itemQuantity);
        *cart = AddItem(item, *cart);
    }
    else if(userChar == 'r')
    {
        getchar();
        char deleteItem[50];
        printf("REMOVE ITEM FROM CART\n");
        printf("Enter the item name:\n");
        fgets(deleteItem, 50, stdin);
        *cart = RemoveItem(deleteItem, *cart);
    }
    else if(userChar == 'c')
    {
        getchar();
        ItemToPurchase item;
        char modItem[50];
        int modQuantity;
        printf("CHANGE ITEM QUANTITY\n");
        printf("Enter the item name:\n");
        fgets(modItem, 50, stdin);
        printf("Enter new quantity:\n");
        scanf(" %d", &modQuantity);
        strcpy(item.itemName, modItem);
        item.itemQuantity = modQuantity;
        *cart = ModifyItem(item, *cart);
    }
    else if(userChar == 'i')
    {
        getchar();
        printf("OUTPUT ITEMS' DESCRIPTIONS\n");
        PrintDescriptions(*cart);
    }
    else if(userChar == 'o')
    {
        getchar();
        printf("OUTPUT SHOPPING CART\n");
        PrintTotal(*cart);
    }
    return userChar;
}
