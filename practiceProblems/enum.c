/*
 * =====================================================================================
 *
 *       Filename:  enum.c
 *
 *    Description:  Enumeration and Switch statement
 *
 *        Version:  1.0
 *        Created:  02/04/2018 12:25:31 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    enum GroceryItem {GR_APPLES, GR_BANANAS, GR_JUICE, GR_WATER};
    enum GroceryItem userItem;

    userItem = GR_APPLES;

    switch(userItem) {
        case 0:
            printf("Fruit\n");
        case 1:
            break;
        case 2:
            printf("Drink\n");
        case 3:
            break;
        default:
            printf("Unknown\n");
}

    return 0;
}
// Function Definitions


