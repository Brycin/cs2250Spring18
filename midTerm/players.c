/*
 * =====================================================================================
 *
 *       Filename:  players.c
 *
 *    Description:  Soccer player roster
 *
 *        Version:  1.0
 *        Created:  02/27/2018 07:57:41 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
const int NUM_PLAYERS = 5;

// Function Prototypes
void InitPlayers(int jerseyNums[], int ratingNums[]);
void PrintRoster(int jerseyNums[], int ratingNums[]);
char DisplayMenu(void);
void UpdatePlayer(int jerseyNums[], int ratingNums[]);

// Main Function
int main(void) 
{
    int jerseyNums[NUM_PLAYERS];
    int ratingNums[NUM_PLAYERS];
    int i = 0;
    int j = 0;
    int playerJersy = 0;
    int playerRating = 0;
    char menuOp = '-';

    // 1. Initialize players
    InitPlayers(jerseyNums, ratingNums);

    // 2. Print roster
    PrintRoster(jerseyNums, ratingNums);

    do {
    // 3. Display Menu
    menuOp = DisplayMenu();


        //Update
        if (menuOp == 'u') 
        {
            UpdatePlayer(jerseyNums, ratingNums);
        }


        // Output players above a user defined rating
        else if (menuOp == 'a') 
        {
            printf("Enter a rating:\n");
            scanf("%d", &playerRating);

            printf("\nABOVE %d\n", playerRating);
            for (i = 0; i < NUM_PLAYERS; ++i) 
            {
                if (ratingNums[i] > playerRating) 
                {
                    printf("Player %d -- Jersey number: %d, Rating: %d\n", (i + 1), jerseyNums[i], ratingNums[i]);
                }
            }
        }

        // Replace
        else if (menuOp == 'r') 
        {
            printf("Enter a jersey number:\n");
            scanf("%d", &playerJersy);

            j = -1;  // Default index for player replacement
            for (i = 0; i < NUM_PLAYERS; ++i) 
            {
                if (playerJersy == jerseyNums[i]) 
                {
                    j = i;
                }
            }

            // Replace player only if the player is in the roster
            if (j != -1) 
            {
                printf("Enter a new jersey number:\n");
                scanf("%d", &playerJersy);

                printf("Enter a rating for the new player:\n");
                scanf("%d", &playerRating);

                jerseyNums[j] = playerJersy;
                ratingNums[j] = playerRating;
            }
        }

        // Output roster
        else if (menuOp == 'o') 
        {
            PrintRoster(jerseyNums, ratingNums);
        }
    } while(menuOp != 'q');

    return 0;
}

// Function Definitions
void InitPlayers(int jerseyNums[], int ratingNums[])
{
    // Get user defined jersey numbers and ratings
    for (int i = 0; i < NUM_PLAYERS; ++i) 
    {
        printf("Enter player %d's jersey number:\n", (i + 1));
        scanf("%d", &(jerseyNums[i]));

        printf("Enter player %d's rating:\n", (i + 1));
        scanf("%d", &(ratingNums[i]));
        printf("\n");
    }
    return;
}
void PrintRoster(int jerseyNums[], int ratingNums[])
{
    // Print roster
    printf("ROSTER\n");
    for (int i = 0; i < NUM_PLAYERS; ++i) 
    {
        printf("Player %d -- Jersey number: %d, Rating: %d\n", (i + 1), jerseyNums[i], ratingNums[i]);
    }
    return;
}
char DisplayMenu(void)
{
    char menuOp;
    // Menu
        printf("\nMENU\n");
        printf("u - Update player rating\n");
        printf("a - Output players above a rating\n");
        printf("r - Replace player\n");
        printf("o - Output roster\n");
        printf("q - Quit\n");

        printf("\nChoose an option:\n");
        scanf(" %c", &menuOp);

        return menuOp;
}
void UpdatePlayer(int jerseyNums[], int ratingNums[])
{
    printf("Enter a jersey number:\n");
    scanf("%d", &playerJersy);

    printf("Enter a new rating for player:\n");
    scanf("%d", &playerRating);

    for (i = 0; i < NUM_PLAYERS; ++i) 
    {
        if (jerseyNums[i] == playerJersy) 
        {
            ratingNums[i] = playerRating;
        }
    }
    return;
}
