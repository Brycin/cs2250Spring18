/*
 * =====================================================================================
 *
 *       Filename:  task4.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/08/2018 09:10:57 AM
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
    int counter = 0;
    int num = 0;

    while(1) // Will never be false so you will always jump into while loop
            // Must have a break statement in body if using while(1);
{
    //Print first 20 numbers
    if((num % 2) == 0)
    {
        //print only odd numbers
        printf("Even number [%d]\n", num);
    }
    else
    {
    //skip odd numbers
        printf("\tSkip odd number [%d]\n", num);
        num++;
        continue; // go to the top of the loop
    }
    //when 20 even numbers, break the loop
    num++;
    counter++;
    if(counter == 20)
    {
        break; //Leave loop
    }
}//End of while loop

    return 0;
}
// Function Definitions


