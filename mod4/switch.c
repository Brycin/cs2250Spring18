/*
 * =====================================================================================
 *
 *       Filename:  branch2.c
 *
 *    Description:  Test Switch Statements
 *                  // Only works on integers or a single char
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

    switch(pos)
{
    case 1:
        printf("Congratulations you won the gold medal!\n");
    break; // break leaves the switch block.

    case 2:
        printf("You won the silver medal!\n");
    break;

    case 3:
        printf("You won the bronze medal!\n");
    break;

    case 14:
    case 28:
        printf("You get a plastic medal!\n");
    break;

    default:
        printf("Sorry no medal for you.\n");
        // No need for break here because you are at the end of the block
}

    return 0;
}
// Function Definitions


