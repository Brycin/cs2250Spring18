/*
 * =====================================================================================
 *
 *       Filename:  hwCh5part2.c
 *
 *    Description:  Homework 5 part 2: Soccer Team Roster
 *
 *        Version:  1.0
 *        Created:  02/15/2018 09:36:14 AM
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
const int PLAYERS = 5;
const int ATTRIBUTES = 2;

// Function Prototypes

// Main Function
int main()
{
    // Enter 5 players jersey number and rating
    // Store in two separate int arrays

    int jerseyArray[PLAYERS];
    int ratingArray[PLAYERS];
    int i;

    for(i =0; i < PLAYERS; ++i)
    {
        printf("Enter player %d's jersey number:\n", i + 1);
        scanf("%d", &jerseyArray[i]);
        printf("Enter player %d's rating:\n", i + 1);
        scanf("%d", &ratingArray[i]);
        printf("\n");
    }
    printf("ROSTER\n");
    for(i = 0; i < PLAYERS; ++i)
    {
        printf("Player %d -- Jersey number: %d, Rating: %d\n", i + 1, jerseyArray[i], ratingArray[i]);
    }


    return 0;
}
// Function Definitions


