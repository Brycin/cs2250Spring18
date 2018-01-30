/*
 * =====================================================================================
 *
 *       Filename:  multiBranch.c
 *
 *    Description:  Nested Branches
 *
 *        Version:  1.0
 *        Created:  01/30/2018 10:10:29 AM
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
    int income = 30000;
    if(income) // Income is an int so as long as income != 0 it will be true
    {
        printf("Income is %d.\n", income);
    }
    else
    {
        printf("No income.\n");
    }

    return 0;
}
// Function Definitions


