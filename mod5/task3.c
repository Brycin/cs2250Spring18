/*
 * =====================================================================================
 *
 *       Filename:  task3.c
 *
 *    Description:  Multiplication Table
 *
 *        Version:  1.0
 *        Created:  02/08/2018 08:52:23 AM
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
const int ROW = 10;
const int COL = 10;


// Function Prototypes

// Main Function
int main()
{
    //Make a 10x multiplication table
    int r;
    int c;

    for(r = 1; r <= ROW; r++)
    {
        for(c = 1; c <= COL; c++)
        {
            printf("[%d]  ", r * c);
        }
        printf("\n");
    }


    return 0;
}
// Function Definitions


