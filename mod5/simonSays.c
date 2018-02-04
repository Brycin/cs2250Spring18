/*
 * =====================================================================================
 *
 *       Filename:  simonSays.c
 *
 *    Description:  Using Loops and Breaks
 *
 *        Version:  1.0
 *        Created:  02/04/2018 11:16:51 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    char simonPattern[50];
    char userPattern[50];
    int userScore = 0;
    int i;

    scanf("%s", simonPattern);
    scanf("%s", userPattern);

    for(i = 0; i <= (strlen(simonPattern) - 1); i++)
{
        if((strncmp(simonPattern, userPattern, i) == 0))
    {
            userScore = userScore + 1;
    }
        else
    {
        userScore = userScore - 1;
        break;
    }

}
    printf("%d", userScore);
    return 0;
}
// Function Definitions


