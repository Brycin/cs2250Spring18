/*
 * =====================================================================================
 *
 *       Filename:  branch2.c
 *
 *    Description:  Else if statements
 *
 *        Version:  1.0
 *        Created:  01/30/2018 09:31:44 AM
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
    int pos =0;
        printf("What is your position?\n");
        scanf("%d", &pos);
    if(pos == 1)
    {
        printf("Congratulations you won the gold medal!\n");
    }
    else if(pos == 2)
    {
        printf("You won the silver medal!\n");
    }
    else if (pos == 3)
    {
     printf("You won the bronze medal!\n");
    }
    else
    {
        printf("Sorry no medal for you.\n");
    }

    return 0;
}
// Function Definitions


