/*
 * =====================================================================================
 *
 *       Filename:  guessNum.c
 *
 *    Description:  Guessing game
 *
 *        Version:  1.0
 *        Created:  02/13/2018 09:28:58 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Constants
const int LEN = 5; // Number of guesses allowed
const int NUM = 20; // Random numbers between 0-NUM

// Function Prototypes

// Main Function
int main()
{
    //Rules:
    //1. Create a random number between 0-20
    //2. Adk the user to enter a guess between 0-20
    //3. IF the guess is less than the number print guess higher
    //4. ELSE print guess lower
    //5. You get 5 chances
    //6. Display all choices they've entered
    //7. Ask if they want to play again. IF 'y' repeat loop 
    srand((int)(time(0)));
    int input[LEN];
    int randNum = 0;
    int i;
    int opp = 0;
    char repeat;
    //printf("Guess a number between 0-%d\n", NUM);
    //For loop way:
    // for(i = 0; (i < LEN) && (input[i] != randNum); ++i)
    // {
    //     scanf("%d", &input[i]);
    //     printf("You entered: %d\n", input[i]);

    //     if(input[i] < randNum)
    //     {
    //        printf("Guess higher\n");
    //     }
    //     else if(input[i] > randNum)
    //     {
    //        printf("Guess lower\n");
    //     }
    //      else
    //     {
    //        printf("You got it!\n");
    //     }
    // }
    // While loop way:
    repeat = 'y';
    while(repeat == 'y')
    {
        randNum = (rand() % NUM);
        
        printf("You have %d guesses.\n", LEN);
        printf("Please enter a number betweeen 0-%d\n", NUM);

        while(opp < LEN)
        {
            scanf("%d", &input[opp]);
            printf("You entered: %d\n", input[opp]);
            if(input[opp] > NUM || input[opp] < 0)
            {
                continue; //Takes user back to top of loop if invalid input
            }
            if(input[opp] < randNum)
            {
                printf("Guess higher\n");
            }
            else if(input[opp] > randNum)
            {
                printf("Guess lower\n");
            }
            else
            {
                printf("You got it!\n");
                break;
            }
            ++opp;
        }

        if (input[LEN] != randNum && opp == LEN)
        {
            printf("Sorry you did not guess the number\n");
        }

        printf("Your guesses:");
        for(i = 0; i <= opp; ++i)
        {
            printf(" %d", input[i]);
        }
        printf("\nRandom number is: %d\n", randNum);

        printf("Do you want to play again? [y/n]\n");

        scanf(" %c", &repeat);

        if(repeat != 'n' && repeat != 'y')
        {
            printf("Invalid entry\n");
        }
        opp = 0;
    }

    return 0;
}
// Function Definitions


