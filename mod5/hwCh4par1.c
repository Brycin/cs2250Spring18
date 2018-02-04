/*
 * =====================================================================================
 *
 *       Filename:  hwCh4par1.c
 *
 *    Description:  Right Triangle
 *
 *        Version:  1.0
 *        Created:  02/04/2018 12:57:58 PM
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
    char triangleChar;
    int triangleHeight = 0;

    printf("Enter a character:\n");
    scanf("%c", &triangleChar);

    printf("Enter triangle height:\n");
    scanf("%d",  &triangleHeight);
    printf("\n");

    int i;
    int j;

    for(i = 1; i <= triangleHeight; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%c ", triangleChar);
        }
        printf("\n");
    }

    return 0;
}
// Function Definitions


