/*
 * =====================================================================================
 *
 *       Filename:  hwCh4part2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/04/2018 01:08:19 PM
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
    char arrowChar = '*';
    int arrowBaseWidth;
    int arrowBaseHeight;
    int arrowHeadWidth;

    printf("Enter arrow base height:\n");
    scanf("%d", &arrowBaseHeight);
    printf("Enter arrow base width:\n");
    scanf("%d", &arrowBaseWidth);
    printf("Enter arrow head width:\n");
    scanf("%d", &arrowHeadWidth);
    while(arrowHeadWidth <= arrowBaseWidth)
    {
        printf("Enter arrow head width:\n");
        scanf("%d", &arrowHeadWidth);
    }
        printf("\n");

    int i;
    int j;

    for(i = 1; i <= arrowBaseHeight; i++)
    {
        for(j = 1; j<= arrowBaseWidth; j++)
        {
            printf("%c", arrowChar);
        }
        printf("\n");
    }
    for(i = arrowHeadWidth; i > 0; i--)
    {
        for(j = i; j > 0; j--)
        {
            printf("%c", arrowChar);
        }
        printf("\n");
    }

    return 0;
}
// Function Definitions


