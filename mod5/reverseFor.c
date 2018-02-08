/*
 * =====================================================================================
 *
 *       Filename:  reverseFor.c
 *
 *    Description:  Reverse for loop
 *
 *        Version:  1.0
 *        Created:  02/08/2018 10:04:28 AM
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
    char name[] = "Brycin Silvester";

    printf("Hi [%s] you are [%lu] bytes long\n", name, sizeof(name));

    for(int c = 0; c < sizeof(name); c++)
    {
        printf("[%c]\n", name[c]);
    }

    return 0;
}
// Function Definitions


