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
    char option = 'r';
    int userInputNum;
    int userInputRat;
    int newNum;

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
    //Add Menu for editing
    printf("\n");
    printf("MENU\n");
    printf("u - Update player rating\n");
    printf("a - Output players above a rating\n");
    printf("r - Replace player\n");
    printf("o - Output roster\n");
    printf("q - Quit\n");
    printf("\n");
    while(option != 'q')
    {
        printf("Choose an option:\n");
        scanf(" %c", &option);
        if(option == 'u')
        {
            printf("Enter a jersey number:\n");
            scanf("%d", &userInputNum);
            printf("Enter a new rating for player:\n");
            scanf("%d", &userInputRat);
            i = 0;
            while(i < PLAYERS)
            {
                if(userInputNum == jerseyArray[i])
                {
                    ratingArray[i] = userInputRat;
                    break;
                }
                ++i;
            }
        }
        if(option == 'a')
        {
            printf("Enter a rating:\n");
            scanf("%d", &userInputRat);
            printf("\n");
            printf("ABOVE %d\n", userInputRat);
            for(i = 0; i < PLAYERS; ++i)
            {
                if(ratingArray[i] > userInputRat)
                {
                    printf("Player %d -- Jersey number: %d, Rating: %d\n", i + 1, jerseyArray[i], ratingArray[i]);
                }
            }
        }
        if(option == 'o')
        {
    for(i = 0; i < PLAYERS; ++i)
    {
        printf("Player %d -- Jersey number: %d, Rating: %d\n", i + 1, jerseyArray[i], ratingArray[i]);
    }
        }
        if(option == 'r')
        {
            printf("Enter a jersey number:\n");
            scanf("%d", &userInputNum);
            printf("Enter a new jersey number:\n");
            scanf("%d", &newNum);
            printf("Enter a rating for the new player:\n");
            scanf("%d", &userInputRat);
            i = 0;
            while(i < PLAYERS)
            {
                if(jerseyArray[i] == userInputNum)
                {
                    jerseyArray[i] = newNum;
                    ratingArray[i] = userInputRat;
                    break;
                }
                ++i;
            }

        }
    } //End of while loop

    return 0;
}
// Function Definitions


