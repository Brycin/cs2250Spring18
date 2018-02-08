/*
 * =====================================================================================
 *
 *       Filename:  forloop.c
 *
 *    Description:  Learn for loops
 *
 *        Version:  1.0
 *        Created:  02/08/2018 08:34:29 AM
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
    // For loop
    // 1) Init your condition
    // 2) Do your work
    // 3) Update your condition
    // IF still true, contunue work
    // ELSE finish loop
    
    //Print Hello there 3 times

    int rounds = 3;
    //While loop
    
    while(rounds != 0)
    {
        printf("Hello there while\n");
        rounds -= 1; // Means rounds = rounds - 1;
    }

    //For loop version
    rounds = 3;

    for(int r = 0; r < rounds; r++) //Initialize condition; check your condition; then do work; then updates using r++ then checks condition again;
    {
        printf("Hello there for\n");
    }
    printf("rounds [%d]\n", rounds);
    printf("rounds [%d]\n", rounds++); // this gives value of rounds first then incriments for the next line
    printf("rounds [%d]\n", rounds);
    printf("rounds [%d]\n", ++rounds); // this increments first then gives you new value of rounds

    return 0;
}
// Function Definitions


