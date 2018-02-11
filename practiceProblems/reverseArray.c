/*
 * =====================================================================================
 *
 *       Filename:  reverseArray.c
 *
 *    Description:  How to reverse order of an Array
 *
 *        Version:  1.0
 *        Created:  02/11/2018 07:59:39 AM
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
const int NUM_ELEMENTS = 7;

// Function Prototypes

// Main Function
int main()
{
    int userVals[NUM_ELEMENTS];
    int tempVal;
    int i;

    printf("Enter %d integers:\n", NUM_ELEMENTS);
    for(i = 0; i < NUM_ELEMENTS; ++i)
    {
        printf("Value: ");
        scanf("%d", &userVals[i]);
    }
    //Reverse Arrays Elements
    for(i = 0; i < (NUM_ELEMENTS/2); ++i)
    {
        tempVal = userVals[i];
        userVals[i] = userVals[NUM_ELEMENTS - 1 - i];
        userVals[NUM_ELEMENTS - 1 - i] = tempVal;
    }
    printf("Your values in reverse order: ");
    for(i =0; i < NUM_ELEMENTS; ++i)
    {
        printf("%d ", userVals[i]);
    }
    return 0;
}
// Function Definitions


