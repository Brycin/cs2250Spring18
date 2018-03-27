/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.h
 *
 *    Description:  Functions to manage ItemToPurchase
 *
 *        Version:  1.0
 *        Created:  03/27/2018 09:05:45 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  SHOPPINGCART__INC__
#define  SHOPPINGCART_INC__

#include "ItemToPurchase.h"

typedef struct ShoppingCart
{
    char customerName[50];
    char currentDate[50];
    ItemToPurchase cartItems[10]; //Creates an array of ItemToPurchase structure
    int cartSize;

}ShoppingCart;

ShoppingCart AddItem(ItemToPurchase item, ShoppingCart cart);
ShoppingCart RemoveItem(char name[], ShoppingCart cart);
ShoppingCart ModifyItem(ItemToPurchase item, ShoppingCart cart);
int GetNumItemsInCart(ShoppingCart cart);
int GetCostOfCart(ShoppingCart cart);
void PrintTotal(ShoppingCart cart);
void PrintDescriptions(ShoppingCart cart);

#endif /* ----- #ifndef SHOPPINGCART__INC__ ----- */

