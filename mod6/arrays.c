/*
 * =====================================================================================
 *
 *       Filename:  arrays.c
 *
 *    Description:  Learn how Arrays work
 *
 *        Version:  1.0
 *        Created:  02/13/2018 08:44:28 AM
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
const int LEN =20;

// Function Prototypes

// Main Function
int main()
{
    int ar[LEN]; // An integer Array of size LEN (length)
    ar[0] = 33;
    ar[1] = 22;
    ar[2] = 66;   // Initializing each position of the array
    ar[3] = 99;

    int i;

    //Task: Initialize all numbers divisible by 3 to 0
    //Else initialize to -99
    for(i = 0; i < LEN; ++i)
    {
        if((i % 3) == 0)
        {
            ar[i] = 0;
        }
        else
        {
            ar[i] = -99;
        }
    }


    //To print all values use a for loop
    for(i = 0; i < LEN; ++i)
    {
        printf("The %d value is %d\n", i + 1, ar[i]);
    }

    return 0;
}
// Function Definitions


