/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Create a 10 Digit Array with random numbers between 0 and 100
 *
 *        Version:  1.0
 *        Created:  02/13/2018 09:06:18 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Constants
int const RAND_NUMS = 10;

// Function Prototypes

// Main Function
int main()
{
    //Task: Print an array of 10 random numbers

    int randArray[RAND_NUMS];
    srand((int)(time(0))); //Sets a random seed every time code is ran (as long as it is at least 1 second apart)
    int i;

    for(i = 0; i < RAND_NUMS; ++i)
    {
        randArray[i] = (rand() % 100);
    }
    for(i = 0; i < RAND_NUMS; ++i)
    {
        printf("Random number %d: %d\n", i +1, randArray[i]);
    }

    return 0;
}
// Function Definitions


