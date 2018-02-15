/*
 * =====================================================================================
 *
 *       Filename:  diceGame.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/15/2018 03:31:43 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
const int NUM_ROLLS = 100;
const int POSSIBLE = 6;

// Constants

// Function Prototypes

// Main Function
int main()
{
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count5 = 0;
    int count6 = 0;
    int i;
    srand((int)(time(0)));
    int randArray[NUM_ROLLS];
    int results[6];

    for(i =0; i < NUM_ROLLS; ++i)
    {
        randArray[i] = ((rand() %6) + 1);
        if(randArray[i] == 1)
        {
            ++count1;
        }
        else if(randArray[i] == 2)
        {
            ++count2;
        }
        else if(randArray[i] == 3)
        {
            ++count3;
        }
        else if(randArray[i] == 4)
        {
            ++count4;
        }
        else if(randArray[i] == 5)
        {
            ++count5;
        }
        else if(randArray[i] == 6)
        {
            ++count6;
        }
    }
    results[0] = count1;
    results[1] = count2;
    results[2] = count3;
    results[3] = count4;
    results[4] = count5;
    results[5] = count6;
    printf("1. ");
    for(i = 0; i < count1; ++i)
    {
        printf("*");
       

    }
    printf(" (%d)\n", results[0]);
    return 0;
}
// Function Definitions


