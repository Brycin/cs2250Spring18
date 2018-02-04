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
    int userInput;
    
    printf("Enter Item Selected\n");
    printf("0 = Apples, 1 = Bananas, 2 = Juice, 3 = Water\n");
    scanf("%d", &userInput);
    switch(userInput) {
        case 0:
        case 1:
            printf("Fruit\n");
            break;
        case 2:
        case 3:
            printf("Drink\n");
            break;
        default:
            printf("Unknown\n");
}

    return 0;
}
// Function Definitions


